#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <vector>
#include "lugares.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnMostrar_clicked();
    void on_btnCrear_clicked();
    void on_btnActualizar_clicked();
    void on_btnEliminar_clicked();
    void on_btnBuscar_clicked(); // Declarar el slot para buscar

private:
    Ui::MainWindow *ui;
    std::vector<Lugar> listaLugares;
};

#endif // MAINWINDOW_H
