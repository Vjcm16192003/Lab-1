/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tabla_empleados;
    QPushButton *boton_Edad_Rango;
    QPushButton *boton_Nombre_Emp;
    QPushButton *boton_Total_Planilla;
    QLabel *label;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *tf_ID_Eliminar;
    QPushButton *btn_EliminarEmpleado;
    QWidget *tab_4;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *tf_ID_Modificar;
    QLineEdit *tf_Update_Sueldo;
    QPushButton *btn_ModificarEmpleado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 517);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 40, 711, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabla_empleados = new QTableView(tab);
        tabla_empleados->setObjectName(QString::fromUtf8("tabla_empleados"));
        tabla_empleados->setGeometry(QRect(70, 80, 511, 241));
        boton_Edad_Rango = new QPushButton(tab);
        boton_Edad_Rango->setObjectName(QString::fromUtf8("boton_Edad_Rango"));
        boton_Edad_Rango->setGeometry(QRect(80, 340, 121, 31));
        boton_Nombre_Emp = new QPushButton(tab);
        boton_Nombre_Emp->setObjectName(QString::fromUtf8("boton_Nombre_Emp"));
        boton_Nombre_Emp->setGeometry(QRect(280, 340, 101, 31));
        boton_Total_Planilla = new QPushButton(tab);
        boton_Total_Planilla->setObjectName(QString::fromUtf8("boton_Total_Planilla"));
        boton_Total_Planilla->setGeometry(QRect(480, 340, 101, 31));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 141, 17));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 161, 17));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 120, 171, 91));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 30, 161, 17));
        label_3->setMinimumSize(QSize(161, 17));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 130, 101, 31));
        tf_ID_Eliminar = new QLineEdit(tab_3);
        tf_ID_Eliminar->setObjectName(QString::fromUtf8("tf_ID_Eliminar"));
        tf_ID_Eliminar->setGeometry(QRect(230, 130, 191, 41));
        btn_EliminarEmpleado = new QPushButton(tab_3);
        btn_EliminarEmpleado->setObjectName(QString::fromUtf8("btn_EliminarEmpleado"));
        btn_EliminarEmpleado->setGeometry(QRect(278, 210, 141, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 161, 17));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 110, 101, 31));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 200, 101, 31));
        tf_ID_Modificar = new QLineEdit(tab_4);
        tf_ID_Modificar->setObjectName(QString::fromUtf8("tf_ID_Modificar"));
        tf_ID_Modificar->setGeometry(QRect(200, 100, 191, 41));
        tf_Update_Sueldo = new QLineEdit(tab_4);
        tf_Update_Sueldo->setObjectName(QString::fromUtf8("tf_Update_Sueldo"));
        tf_Update_Sueldo->setGeometry(QRect(200, 190, 191, 41));
        btn_ModificarEmpleado = new QPushButton(tab_4);
        btn_ModificarEmpleado->setObjectName(QString::fromUtf8("btn_ModificarEmpleado"));
        btn_ModificarEmpleado->setGeometry(QRect(248, 270, 141, 41));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 799, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        boton_Edad_Rango->setText(QApplication::translate("MainWindow", "Rango por Edad", nullptr));
        boton_Nombre_Emp->setText(QApplication::translate("MainWindow", "Por Nombre", nullptr));
        boton_Total_Planilla->setText(QApplication::translate("MainWindow", "Total Planilla", nullptr));
        label->setText(QApplication::translate("MainWindow", "Tabla de Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Agregar Empleados", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Agregar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Eliminar Empleados", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "ID empleado: ", nullptr));
        btn_EliminarEmpleado->setText(QApplication::translate("MainWindow", "Eliminar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Page", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Modficar Empleados", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ID empleado: ", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Nuevo Sueldo:", nullptr));
        btn_ModificarEmpleado->setText(QApplication::translate("MainWindow", "Modificar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
