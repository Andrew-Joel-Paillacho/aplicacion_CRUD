/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineCodigo;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineNombreEspecie;
    QLabel *label_3;
    QLineEdit *lineRegion;
    QPushButton *btnCrear;
    QPushButton *btnActualizar;
    QPushButton *btnEliminar;
    QLineEdit *lineReservaNatural;
    QLineEdit *lineTipo;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *checkPeligro;
    QTableWidget *tableWidget;
    QPushButton *btnMostrar;
    QTextEdit *textDescripcionEspecie;
    QLineEdit *lineEditBuscar;
    QPushButton *btnBuscar;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1512, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 39, 16));
        lineCodigo = new QLineEdit(centralwidget);
        lineCodigo->setObjectName("lineCodigo");
        lineCodigo->setGeometry(QRect(9, 31, 108, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 168, 62, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 8, 91, 16));
        lineNombreEspecie = new QLineEdit(centralwidget);
        lineNombreEspecie->setObjectName("lineNombreEspecie");
        lineNombreEspecie->setGeometry(QRect(130, 30, 421, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 108, 37, 16));
        lineRegion = new QLineEdit(centralwidget);
        lineRegion->setObjectName("lineRegion");
        lineRegion->setGeometry(QRect(140, 130, 161, 24));
        btnCrear = new QPushButton(centralwidget);
        btnCrear->setObjectName("btnCrear");
        btnCrear->setEnabled(true);
        btnCrear->setGeometry(QRect(10, 290, 80, 24));
        btnActualizar = new QPushButton(centralwidget);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(210, 290, 80, 24));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(310, 290, 80, 24));
        lineReservaNatural = new QLineEdit(centralwidget);
        lineReservaNatural->setObjectName("lineReservaNatural");
        lineReservaNatural->setGeometry(QRect(10, 80, 541, 24));
        lineTipo = new QLineEdit(centralwidget);
        lineTipo->setObjectName("lineTipo");
        lineTipo->setGeometry(QRect(10, 130, 108, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 58, 82, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 108, 105, 16));
        checkPeligro = new QCheckBox(centralwidget);
        checkPeligro->setObjectName("checkPeligro");
        checkPeligro->setGeometry(QRect(10, 260, 231, 22));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 350, 1481, 391));
        btnMostrar = new QPushButton(centralwidget);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(110, 290, 80, 24));
        textDescripcionEspecie = new QTextEdit(centralwidget);
        textDescripcionEspecie->setObjectName("textDescripcionEspecie");
        textDescripcionEspecie->setGeometry(QRect(10, 190, 541, 70));
        lineEditBuscar = new QLineEdit(centralwidget);
        lineEditBuscar->setObjectName("lineEditBuscar");
        lineEditBuscar->setGeometry(QRect(410, 130, 113, 24));
        btnBuscar = new QPushButton(centralwidget);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(310, 130, 80, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 110, 191, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 320, 481, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1512, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Codigo", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Descripcion", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre Especie", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Region", nullptr));
        btnCrear->setText(QCoreApplication::translate("MainWindow", "Crear", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Reserva Natural", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Tipo (Flora o Fauna)", nullptr));
        checkPeligro->setText(QCoreApplication::translate("MainWindow", "La Especie esta en Peligro de Extincion", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ingrese codigo para la busqueda", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Nota: Primero presionar le Boton \"Mostrar\" para determinar los datos ya existentes..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
