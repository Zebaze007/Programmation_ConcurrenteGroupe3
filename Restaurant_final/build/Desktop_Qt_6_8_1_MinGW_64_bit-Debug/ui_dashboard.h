/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelClients;
    QLabel *labelTables;
    QGroupBox *groupBox_2;
    QTableView *tableViewStock_2;
    QGroupBox *groupBox_3;
    QTableView *tableViewUstensiles;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(400, 300);
        groupBox = new QGroupBox(Dashboard);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 381, 261));
        groupBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 81, 16));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 50, 81, 16));
        labelClients = new QLabel(groupBox);
        labelClients->setObjectName("labelClients");
        labelClients->setGeometry(QRect(80, 30, 37, 16));
        labelTables = new QLabel(groupBox);
        labelTables->setObjectName("labelTables");
        labelTables->setGeometry(QRect(80, 50, 37, 16));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 90, 181, 161));
        tableViewStock_2 = new QTableView(groupBox_2);
        tableViewStock_2->setObjectName("tableViewStock_2");
        tableViewStock_2->setGeometry(QRect(0, 10, 256, 192));
        tableViewStock_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"border: 1px solid #DDD;\n"
"font-size: 16px;\n"
""));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(200, 90, 181, 161));
        tableViewUstensiles = new QTableView(groupBox_3);
        tableViewUstensiles->setObjectName("tableViewUstensiles");
        tableViewUstensiles->setGeometry(QRect(-5, 11, 271, 191));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dashboard", "Statistiques g\303\251n\303\251rales", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Nombre de clients :", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Tables disponibles :", nullptr));
        labelClients->setText(QString());
        labelTables->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Dashboard", "Suivi des Stocks", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dashboard", "Suivi du Mat\303\251riel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
