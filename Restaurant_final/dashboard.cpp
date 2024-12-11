#include "dashboard.h"
#include <QStandardItemModel>
#include <QWidget>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent) {
    setupUI();
    setupFakeData();
}

Dashboard::~Dashboard() {}

void Dashboard::setupUI() {
    // Création du widget central
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    // Section : Statistiques Générales
    QGroupBox *statsGroup = new QGroupBox("Statistiques Générales", centralWidget);
    QVBoxLayout *statsLayout = new QVBoxLayout(statsGroup);

    labelClients = new QLabel("Clients Actuels : 0", statsGroup);
    labelClients->setStyleSheet("font-size: 20px; font-weight: bold; color: #4CAF50;");
    statsLayout->addWidget(labelClients);

    labelTables = new QLabel("Tables Disponibles : 0", statsGroup);
    labelTables->setStyleSheet("font-size: 20px; font-weight: bold; color: #2196F3;");
    statsLayout->addWidget(labelTables);

    mainLayout->addWidget(statsGroup);

    // Section : Suivi des Stocks
    QGroupBox *stockGroup = new QGroupBox("Suivi des Stocks", centralWidget);
    QVBoxLayout *stockLayout = new QVBoxLayout(stockGroup);

    tableViewStock = new QTableView(stockGroup);
    tableViewStock->setStyleSheet("background-color: #FFFFFF; border: 1px solid #DDD; font-size: 16px;");
    stockLayout->addWidget(tableViewStock);

    mainLayout->addWidget(stockGroup);

    // Section : Suivi des Ustensiles
    QGroupBox *utensilsGroup = new QGroupBox("Suivi des Ustensiles", centralWidget);
    QVBoxLayout *utensilsLayout = new QVBoxLayout(utensilsGroup);

    tableViewUstensiles = new QTableView(utensilsGroup);
    tableViewUstensiles->setStyleSheet("background-color: #FFFFFF; border: 1px solid #DDD; font-size: 16px;");
    utensilsLayout->addWidget(tableViewUstensiles);

    mainLayout->addWidget(utensilsGroup);

    // Définir le widget central
    setCentralWidget(centralWidget);
}

void Dashboard::setupFakeData() {
    // Mettre à jour les statistiques
    labelClients->setText("Clients Actuels : 25");
    labelTables->setText("Tables Disponibles : 8");

    // Ajouter des données fictives aux stocks
    QStandardItemModel *stockModel = new QStandardItemModel(this);
    stockModel->setHorizontalHeaderLabels({"Ingrédient", "Quantité"});
    stockModel->appendRow({new QStandardItem("Tomates"), new QStandardItem("50 kg")});
    stockModel->appendRow({new QStandardItem("Poulet"), new QStandardItem("30 kg")});
    stockModel->appendRow({new QStandardItem("Farine"), new QStandardItem("20 kg")});
    tableViewStock->setModel(stockModel);

    // Ajouter des données fictives aux ustensiles
    QStandardItemModel *utensilsModel = new QStandardItemModel(this);
    utensilsModel->setHorizontalHeaderLabels({"Ustensile", "Quantité"});
    utensilsModel->appendRow({new QStandardItem("Assiettes"), new QStandardItem("120")});
    utensilsModel->appendRow({new QStandardItem("Couverts"), new QStandardItem("100")});
    utensilsModel->appendRow({new QStandardItem("Verres"), new QStandardItem("80")});
    tableViewUstensiles->setModel(utensilsModel);
}
