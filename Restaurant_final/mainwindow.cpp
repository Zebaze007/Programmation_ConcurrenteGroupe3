#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sceneDiningArea(new QGraphicsScene(this)) // Crée la scène pour la salle
    , sceneKitchenArea(new QGraphicsScene(this)) // Crée la scène pour la cuisine
    , client(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso6.jpg", 1, this))
    , client2(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso1.png", 2, this))
    , table(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 1, this))
    , table2(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 2, this))
    , table3(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 3, this))
    , counter(new Counter(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoircomplet.png", 1, this))
    , washingMachine(new WashingMachine(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavelinge.png", 1, this))
    , dishwasher(new Dishwasher(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavevaissel.png", 1, this)) // Crée le lave-vaisselle
    , timer(new QTimer(this)) // Timer pour gérer les déplacements
    , elapsedSeconds(0) // Initialisation du temps écoulé
{
    ui->setupUi(this);

    // Configurez la scène pour la salle de restauration
    ui->diningAreaView->setScene(sceneDiningArea);
    sceneDiningArea->setSceneRect(0, 0, ui->diningAreaView->width(), ui->diningAreaView->height());

    // Ajoutez les objets à la salle de restauration
    sceneDiningArea->addItem(client->getGraphicsItem());
    client->setPosition(100, 150, 100.0);

    sceneDiningArea->addItem(client2->getGraphicsItem());
    client2->setPosition(400, 150, 100.0);

    sceneDiningArea->addItem(table->getGraphicsItem());
    table->setPosition(100, 200, 100.0);

    sceneDiningArea->addItem(table2->getGraphicsItem());
    table2->setPosition(100, 100, 100.0);

    sceneDiningArea->addItem(table3->getGraphicsItem());
    table3->setPosition(400, 100, 100.0);

    // Configurez la scène pour la cuisine
    ui->kitchenAreaView->setScene(sceneKitchenArea);
    sceneKitchenArea->setSceneRect(0, 0, ui->kitchenAreaView->width(), ui->kitchenAreaView->height());

    // Ajoutez les objets à la cuisine
    sceneKitchenArea->addItem(counter->getGraphicsItem());
    counter->setPosition(50, 300, 100.0);

    sceneKitchenArea->addItem(washingMachine->getGraphicsItem());
    washingMachine->setPosition(550, 550, 100.0);

    sceneKitchenArea->addItem(dishwasher->getGraphicsItem());
    dishwasher->setPosition(550, 500, 100.0);

    // Connectez les boutons aux slots
    connect(ui->stratButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);

    // Connectez le timer à la mise à jour du temps et des déplacements
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimeDisplay);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClientPositions);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}

// Mise à jour de l'affichage du temps
void MainWindow::updateTimeDisplay()
{
    elapsedSeconds++;
    ui->timeButton->setText(QString("Time: %1s").arg(elapsedSeconds));
}

// Mise à jour des positions des clients
void MainWindow::updateClientPositions()
{
    int newX1 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY1 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client->setPosition(newX1, newY1, 100.0);

    int newX2 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY2 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client2->setPosition(newX2, newY2, 100.0);
}

// Slot pour le bouton Démarrer
void MainWindow::onStartButtonClicked()
{
    qDebug() << "Bouton Démarrer cliqué.";
    timer->start(1000); // Démarre le timer pour mises à jour toutes les 1000ms (1 seconde)
}

// Slot pour le bouton Pause
void MainWindow::onPauseButtonClicked()
{
    qDebug() << "Bouton Pause cliqué.";
    timer->stop(); // Arrête temporairement le timer
}

// Slot pour le bouton Stopper
void MainWindow::onStopButtonClicked()
{
    qDebug() << "Bouton Stopper cliqué.";
    timer->stop();             // Arrête le timer
    elapsedSeconds = 0;        // Réinitialise le temps écoulé
    ui->timeButton->setText("Time: 0s"); // Réinitialise l'affichage
    client->setPosition(100, 150, 100.0);
    client2->setPosition(400, 150, 100.0);
}
