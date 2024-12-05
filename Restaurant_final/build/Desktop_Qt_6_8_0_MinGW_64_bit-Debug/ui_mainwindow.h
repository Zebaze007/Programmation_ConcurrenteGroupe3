/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *stratButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *timeButton;
    QPushButton *alertButton;
    QPushButton *stockButton;
    QFrame *mainFrame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *leftActionButtonsFrame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *assignTableButton;
    QPushButton *takeOrderButton;
    QPushButton *serveFoodButton;
    QPushButton *clearTableButton;
    QFrame *diningAreaFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *diningAreaLabel;
    QGraphicsView *diningAreaView;
    QFrame *kitchenAreaFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *kitchenAreaLabel;
    QGraphicsView *kitchenAreaView;
    QFrame *rightInfoFrame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *customerMoodButton;
    QListWidget *menuListWidget;
    QTextBrowser *stockInfoTextBrowser;
    QTextBrowser *tableInfoTextBrowser;
    QTextBrowser *customerInfoTextBrowser;
    QFrame *dashboardFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *stockLevelsLabel;
    QProgressBar *stockLevelsProgressBar;
    QLabel *tableSeatsLabel;
    QProgressBar *tableSeatsProgressBar;
    QLabel *customerNumberLabel;
    QProgressBar *customerNumberProgressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1718, 816);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(headerFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        stratButton = new QPushButton(headerFrame);
        stratButton->setObjectName("stratButton");

        horizontalLayout->addWidget(stratButton);

        pauseButton = new QPushButton(headerFrame);
        pauseButton->setObjectName("pauseButton");

        horizontalLayout->addWidget(pauseButton);

        stopButton = new QPushButton(headerFrame);
        stopButton->setObjectName("stopButton");

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        timeButton = new QPushButton(headerFrame);
        timeButton->setObjectName("timeButton");

        horizontalLayout->addWidget(timeButton);

        alertButton = new QPushButton(headerFrame);
        alertButton->setObjectName("alertButton");

        horizontalLayout->addWidget(alertButton);

        stockButton = new QPushButton(headerFrame);
        stockButton->setObjectName("stockButton");

        horizontalLayout->addWidget(stockButton);


        verticalLayout->addWidget(headerFrame);

        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(mainFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leftActionButtonsFrame = new QFrame(mainFrame);
        leftActionButtonsFrame->setObjectName("leftActionButtonsFrame");
        leftActionButtonsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        leftActionButtonsFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(leftActionButtonsFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        assignTableButton = new QPushButton(leftActionButtonsFrame);
        assignTableButton->setObjectName("assignTableButton");

        verticalLayout_4->addWidget(assignTableButton);

        takeOrderButton = new QPushButton(leftActionButtonsFrame);
        takeOrderButton->setObjectName("takeOrderButton");

        verticalLayout_4->addWidget(takeOrderButton);

        serveFoodButton = new QPushButton(leftActionButtonsFrame);
        serveFoodButton->setObjectName("serveFoodButton");

        verticalLayout_4->addWidget(serveFoodButton);

        clearTableButton = new QPushButton(leftActionButtonsFrame);
        clearTableButton->setObjectName("clearTableButton");

        verticalLayout_4->addWidget(clearTableButton);


        horizontalLayout_2->addWidget(leftActionButtonsFrame);

        diningAreaFrame = new QFrame(mainFrame);
        diningAreaFrame->setObjectName("diningAreaFrame");
        diningAreaFrame->setFrameShape(QFrame::Shape::StyledPanel);
        diningAreaFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(diningAreaFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        diningAreaLabel = new QLabel(diningAreaFrame);
        diningAreaLabel->setObjectName("diningAreaLabel");
        diningAreaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(diningAreaLabel);

        diningAreaView = new QGraphicsView(diningAreaFrame);
        diningAreaView->setObjectName("diningAreaView");
        diningAreaView->setMinimumSize(QSize(600, 600));
        diningAreaView->setStyleSheet(QString::fromUtf8("background-image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/Salle.jpg);\n"
"image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso6.jpg);\n"
""));

        verticalLayout_2->addWidget(diningAreaView);


        horizontalLayout_2->addWidget(diningAreaFrame);

        kitchenAreaFrame = new QFrame(mainFrame);
        kitchenAreaFrame->setObjectName("kitchenAreaFrame");
        kitchenAreaFrame->setFrameShape(QFrame::Shape::StyledPanel);
        kitchenAreaFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(kitchenAreaFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        kitchenAreaLabel = new QLabel(kitchenAreaFrame);
        kitchenAreaLabel->setObjectName("kitchenAreaLabel");
        kitchenAreaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(kitchenAreaLabel);

        kitchenAreaView = new QGraphicsView(kitchenAreaFrame);
        kitchenAreaView->setObjectName("kitchenAreaView");
        kitchenAreaView->setMinimumSize(QSize(600, 600));
        kitchenAreaView->setStyleSheet(QString::fromUtf8("background-image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisine.jpg);"));

        verticalLayout_3->addWidget(kitchenAreaView);


        horizontalLayout_2->addWidget(kitchenAreaFrame);

        rightInfoFrame = new QFrame(mainFrame);
        rightInfoFrame->setObjectName("rightInfoFrame");
        rightInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        rightInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(rightInfoFrame);
        verticalLayout_5->setObjectName("verticalLayout_5");
        customerMoodButton = new QPushButton(rightInfoFrame);
        customerMoodButton->setObjectName("customerMoodButton");

        verticalLayout_5->addWidget(customerMoodButton);

        menuListWidget = new QListWidget(rightInfoFrame);
        new QListWidgetItem(menuListWidget);
        new QListWidgetItem(menuListWidget);
        new QListWidgetItem(menuListWidget);
        menuListWidget->setObjectName("menuListWidget");
        menuListWidget->setMinimumSize(QSize(200, 200));

        verticalLayout_5->addWidget(menuListWidget);

        stockInfoTextBrowser = new QTextBrowser(rightInfoFrame);
        stockInfoTextBrowser->setObjectName("stockInfoTextBrowser");
        stockInfoTextBrowser->setMinimumSize(QSize(200, 100));

        verticalLayout_5->addWidget(stockInfoTextBrowser);

        tableInfoTextBrowser = new QTextBrowser(rightInfoFrame);
        tableInfoTextBrowser->setObjectName("tableInfoTextBrowser");
        tableInfoTextBrowser->setMinimumSize(QSize(200, 100));

        verticalLayout_5->addWidget(tableInfoTextBrowser);

        customerInfoTextBrowser = new QTextBrowser(rightInfoFrame);
        customerInfoTextBrowser->setObjectName("customerInfoTextBrowser");
        customerInfoTextBrowser->setMinimumSize(QSize(200, 100));

        verticalLayout_5->addWidget(customerInfoTextBrowser);


        horizontalLayout_2->addWidget(rightInfoFrame);


        verticalLayout->addWidget(mainFrame);

        dashboardFrame = new QFrame(centralwidget);
        dashboardFrame->setObjectName("dashboardFrame");
        dashboardFrame->setFrameShape(QFrame::Shape::StyledPanel);
        dashboardFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(dashboardFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        stockLevelsLabel = new QLabel(dashboardFrame);
        stockLevelsLabel->setObjectName("stockLevelsLabel");

        horizontalLayout_3->addWidget(stockLevelsLabel);

        stockLevelsProgressBar = new QProgressBar(dashboardFrame);
        stockLevelsProgressBar->setObjectName("stockLevelsProgressBar");
        stockLevelsProgressBar->setValue(0);

        horizontalLayout_3->addWidget(stockLevelsProgressBar);

        tableSeatsLabel = new QLabel(dashboardFrame);
        tableSeatsLabel->setObjectName("tableSeatsLabel");

        horizontalLayout_3->addWidget(tableSeatsLabel);

        tableSeatsProgressBar = new QProgressBar(dashboardFrame);
        tableSeatsProgressBar->setObjectName("tableSeatsProgressBar");
        tableSeatsProgressBar->setValue(0);

        horizontalLayout_3->addWidget(tableSeatsProgressBar);

        customerNumberLabel = new QLabel(dashboardFrame);
        customerNumberLabel->setObjectName("customerNumberLabel");

        horizontalLayout_3->addWidget(customerNumberLabel);

        customerNumberProgressBar = new QProgressBar(dashboardFrame);
        customerNumberProgressBar->setObjectName("customerNumberProgressBar");
        customerNumberProgressBar->setValue(0);

        horizontalLayout_3->addWidget(customerNumberProgressBar);


        verticalLayout->addWidget(dashboardFrame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Projet", nullptr));
        stratButton->setText(QCoreApplication::translate("MainWindow", "D\303\251marrer", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stopper", nullptr));
        timeButton->setText(QCoreApplication::translate("MainWindow", "Heure : 00 00", nullptr));
        alertButton->setText(QCoreApplication::translate("MainWindow", "Alertes: 0", nullptr));
        stockButton->setText(QCoreApplication::translate("MainWindow", "Stock: 0", nullptr));
        assignTableButton->setText(QCoreApplication::translate("MainWindow", "Assigner une table", nullptr));
        takeOrderButton->setText(QCoreApplication::translate("MainWindow", "Prendre la commande", nullptr));
        serveFoodButton->setText(QCoreApplication::translate("MainWindow", "Servir la nourriture", nullptr));
        clearTableButton->setText(QCoreApplication::translate("MainWindow", "D\303\251barrasser la table", nullptr));
        diningAreaLabel->setText(QCoreApplication::translate("MainWindow", "Salle de restauration", nullptr));
        kitchenAreaLabel->setText(QCoreApplication::translate("MainWindow", "Cuisine", nullptr));
        customerMoodButton->setText(QCoreApplication::translate("MainWindow", "Humeur des clients \360\237\230\212", nullptr));

        const bool __sortingEnabled = menuListWidget->isSortingEnabled();
        menuListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = menuListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Plat 1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = menuListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Plat 2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = menuListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Plat 3", nullptr));
        menuListWidget->setSortingEnabled(__sortingEnabled);

        stockInfoTextBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Niveaux de stock:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Ingr\303\251dient 1: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Ingr\303\251dient 2: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Ingr\303\251dient 3: 0</span></p></body></html>", nullptr));
        tableInfoTextBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Infos tables:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Total tables: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Tables occup\303\251es: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Tables disponibles: 0</span></p></body></html>", nullptr));
        customerInfoTextBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Infos clients:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Total clients: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Clients en attente: 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">- Clients servis: 0</span></p></body></html>", nullptr));
        stockLevelsLabel->setText(QCoreApplication::translate("MainWindow", "Niveaux de stock", nullptr));
        tableSeatsLabel->setText(QCoreApplication::translate("MainWindow", "Places \303\240 table", nullptr));
        customerNumberLabel->setText(QCoreApplication::translate("MainWindow", "Nombre de clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
