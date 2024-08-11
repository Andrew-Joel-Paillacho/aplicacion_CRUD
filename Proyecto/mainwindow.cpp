#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lugares.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inicializarLugares(listaLugares);
    connect(ui->btnMostrar, &QPushButton::clicked, this, &MainWindow::on_btnMostrar_clicked);
    connect(ui->btnCrear, &QPushButton::clicked, this, &MainWindow::on_btnCrear_clicked);
    connect(ui->btnActualizar, &QPushButton::clicked, this, &MainWindow::on_btnActualizar_clicked);
    connect(ui->btnEliminar, &QPushButton::clicked, this, &MainWindow::on_btnEliminar_clicked);
    connect(ui->btnBuscar, &QPushButton::clicked, this, &MainWindow::on_btnBuscar_clicked); // Connect the search button

    // Set up tableWidget
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels({"Codigo", "Nombre Especie", "Reserva Natural", "Region", "Tipo", "En Peligro", "Descripcion"});
    ui->tableWidget->setColumnWidth(6, 300);  // Adjust the width of the "Descripcion" column

    // Enable word wrapping for the description column
    ui->tableWidget->setWordWrap(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnMostrar_clicked()
{
    ui->tableWidget->setRowCount(0); // Clear the table before showing data
    for (const auto& lugar : listaLugares) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(lugar.codigo)));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(lugar.nombreEspecie)));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(lugar.reservaNatural)));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(lugar.region)));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(lugar.tipo)));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(lugar.enPeligro ? "Sí" : "No"));

        QTableWidgetItem *descriptionItem = new QTableWidgetItem(QString::fromStdString(lugar.descripcionEspecie));
        descriptionItem->setTextAlignment(Qt::AlignLeft | Qt::AlignTop);
        descriptionItem->setFlags(descriptionItem->flags() | Qt::ItemIsEditable);
        ui->tableWidget->setItem(row, 6, descriptionItem);

        ui->tableWidget->resizeRowsToContents();
    }
}

void MainWindow::on_btnCrear_clicked()
{
    Lugar nuevoLugar;
    nuevoLugar.codigo = ui->lineCodigo->text().toStdString();
    nuevoLugar.nombreEspecie = ui->lineNombreEspecie->text().toStdString();
    nuevoLugar.reservaNatural = ui->lineReservaNatural->text().toStdString();
    nuevoLugar.region = ui->lineRegion->text().toStdString();
    nuevoLugar.tipo = ui->lineTipo->text().toStdString();
    nuevoLugar.enPeligro = ui->checkPeligro->isChecked();
    nuevoLugar.descripcionEspecie = ui->textDescripcionEspecie->toPlainText().toStdString();
    crear(listaLugares, nuevoLugar);
    on_btnMostrar_clicked(); // Actualiza la lista de lugares después de crear uno nuevo
}

void MainWindow::on_btnActualizar_clicked()
{
    Lugar lugarActualizado;
    lugarActualizado.codigo = ui->lineCodigo->text().toStdString();
    lugarActualizado.nombreEspecie = ui->lineNombreEspecie->text().toStdString();
    lugarActualizado.reservaNatural = ui->lineReservaNatural->text().toStdString();
    lugarActualizado.region = ui->lineRegion->text().toStdString();
    lugarActualizado.tipo = ui->lineTipo->text().toStdString();
    lugarActualizado.enPeligro = ui->checkPeligro->isChecked();
    lugarActualizado.descripcionEspecie = ui->textDescripcionEspecie->toPlainText().toStdString();
    actualizar(listaLugares, lugarActualizado);
    on_btnMostrar_clicked(); // Actualiza la lista de lugares después de actualizar uno
}

void MainWindow::on_btnEliminar_clicked()
{
    std::string codigo = ui->lineCodigo->text().toStdString();
    eliminar(listaLugares, codigo);
    on_btnMostrar_clicked(); // Actualiza la lista de lugares después de eliminar uno
}

void MainWindow::on_btnBuscar_clicked()
{
    std::string codigo = ui->lineEditBuscar->text().toStdString();
    ui->tableWidget->setRowCount(0); // Clear the table before showing search results
    for (const auto& lugar : listaLugares) {
        if (lugar.codigo == codigo) {
            int row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(lugar.codigo)));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(lugar.nombreEspecie)));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(lugar.reservaNatural)));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(lugar.region)));
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(lugar.tipo)));
            ui->tableWidget->setItem(row, 5, new QTableWidgetItem(lugar.enPeligro ? "Sí" : "No"));

            QTableWidgetItem *descriptionItem = new QTableWidgetItem(QString::fromStdString(lugar.descripcionEspecie));
            descriptionItem->setTextAlignment(Qt::AlignLeft | Qt::AlignTop);
            descriptionItem->setFlags(descriptionItem->flags() | Qt::ItemIsEditable);
            ui->tableWidget->setItem(row, 6, descriptionItem);

            ui->tableWidget->resizeRowsToContents();
            break; // Assumes codes are unique and only shows the first match
        }
    }
}
