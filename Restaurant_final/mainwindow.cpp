#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QRandomGenerator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sceneDiningArea(new QGraphicsScene(this)) // Crée la scène pour la salle
    , sceneKitchenArea(new QGraphicsScene(this)) // Crée la scène pour la cuisine
    , client(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso6.jpg", 1, this))
    , client2(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso1.png", 2, this))
    , client3(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso2.png", 3, this))
    , client4(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
    , client5(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso6.jpg", 1, this))
    , client6(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso1.png", 2, this))
    , client7(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso2.png", 3, this))
    , client8(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
    , client9(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso6.jpg", 1, this))
    , client10(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso1.png", 2, this))
    , client11(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso2.png", 3, this))
    , client12(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
    , table(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 1, this))
    , table2(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 2, this))
    , table5(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 5, this))
    , table6(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 6, this))
    ,table14(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 14, this))
    ,table15(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table.png", 15, this))
    , table3(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 3, this))
    , table4(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 4, this))
    , table7(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 7, this))
    , table8(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 8, this))
    , table9(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 9, this))
    , table10(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 10, this))
    , table11(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 11, this))
    , table12(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 12, this))
    , table13(new Table(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/tableP.png", 13, this))
    , counter(new Counter(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoircomplet.png", 1, this))
    , counter2(new Counter(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoircomplet.png", 2, this))
    , washingMachine(new WashingMachine(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavelinge.png", 1, this))
    , dishwasher(new Dishwasher(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavevaissel.png", 1, this)) // Crée le lave-vaisselle
    , stove(new Stove(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/Four.png", 1, this))
    , cookChief(new CookChief(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chef de cuisine.png", 1, this))
    , cooker(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , server1(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 1, this))
    , server2(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 2, this))
    , server3(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 3, this))
    , server4(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 4, this))
    , roomclerk(new RoomClerk(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 4, this))
    , dish(new Dish(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 4, this))
    , dish2(new Dish(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 4, this))
    , butler(new Butler(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/maitre.png", 4, this))
    , washer(new Washer(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plongeuse.png", 4, this))
    , washer2(new Washer(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plongeuse.png", 4, this))
    , timer(new QTimer(this)) // Timer pour gérer les déplacements
    , elapsedSeconds(0) // Initialisation du temps écoulé
{
    ui->setupUi(this);

    // Configurez la scène pour la salle de restauration
    ui->diningAreaView->setScene(sceneDiningArea);
    sceneDiningArea->setSceneRect(0, 0, ui->diningAreaView->width(), ui->diningAreaView->height());

    // Ajoutez les objets à la salle de restauration

    sceneDiningArea->addItem(butler->getGraphicsItem());
    butler->setPosition(100, 300, 100.0);

    sceneDiningArea->addItem(client->getGraphicsItem());
    client->setPosition(79, 300, 100.0);

    sceneDiningArea->addItem(client2->getGraphicsItem());
    client2->setPosition(79, 325, 100.0);

    sceneDiningArea->addItem(client3->getGraphicsItem());
    client3->setPosition(79, 285, 100.0);

    sceneDiningArea->addItem(client4->getGraphicsItem());
    client4->setPosition(79, 265, 100.0);

    sceneDiningArea->addItem(client5->getGraphicsItem());
    client5->setPosition(59, 300, 100.0);

    sceneDiningArea->addItem(client6->getGraphicsItem());
    client6->setPosition(59, 325, 100.0);

    sceneDiningArea->addItem(client7->getGraphicsItem());
    client7->setPosition(59, 285, 100.0);

    sceneDiningArea->addItem(client8->getGraphicsItem());
    client8->setPosition(59, 265, 100.0);

    sceneDiningArea->addItem(client9->getGraphicsItem());
    client9->setPosition(39, 300, 100.0);

    sceneDiningArea->addItem(client10->getGraphicsItem());
    client10->setPosition(39, 325, 100.0);

    sceneDiningArea->addItem(client11->getGraphicsItem());
    client11->setPosition(39, 285, 100.0);

    sceneDiningArea->addItem(client12->getGraphicsItem());
    client12->setPosition(39, 265, 100.0);

    sceneDiningArea->addItem(server1->getGraphicsItem());
    server1->setPosition(100, 150, 70.0);

    sceneDiningArea->addItem(server4->getGraphicsItem());
    server4->setPosition(375, 100, 70.0);

    sceneDiningArea->addItem(server2->getGraphicsItem());
    server2->setPosition(100, 450, 70.0);

    sceneDiningArea->addItem(server3->getGraphicsItem());
    server3->setPosition(400, 450, 70.0);

    sceneDiningArea->addItem(roomclerk->getGraphicsItem());
    roomclerk->setPosition(450, 250, 100.0);



    sceneDiningArea->addItem(table->getGraphicsItem());
    table->setPosition(100, 500, 100.0);
    sceneDiningArea->addItem(table2->getGraphicsItem());
    table2->setPosition(100, 400, 100.0);
    sceneDiningArea->addItem(table5->getGraphicsItem());
    table5->setPosition(300, 500, 100.0);
    sceneDiningArea->addItem(table6->getGraphicsItem());
    table6->setPosition(300, 400, 100.0);
    sceneDiningArea->addItem(table14->getGraphicsItem());
    table14->setPosition(500, 400, 100.0);
    sceneDiningArea->addItem(table15->getGraphicsItem());
    table15->setPosition(500, 500, 100.0);


    sceneDiningArea->addItem(table3->getGraphicsItem());
    table3->setPosition(100, 100, 100.0);
    sceneDiningArea->addItem(table4->getGraphicsItem());
    table4->setPosition(100, 200, 100.0);
    sceneDiningArea->addItem(table7->getGraphicsItem());
    table7->setPosition(300, 100, 100.0);
    sceneDiningArea->addItem(table8->getGraphicsItem());
    table8->setPosition(300, 200, 100.0);
    sceneDiningArea->addItem(table9->getGraphicsItem());
    table9->setPosition(500, 100, 100.0);
    sceneDiningArea->addItem(table10->getGraphicsItem());
    table10->setPosition(500, 200, 100.0);
    sceneDiningArea->addItem(table11->getGraphicsItem());
    table11->setPosition(100, 25, 100.0);
    sceneDiningArea->addItem(table12->getGraphicsItem());
    table12->setPosition(300, 25, 100.0);
    sceneDiningArea->addItem(table13->getGraphicsItem());
    table13->setPosition(500, 25, 100.0);



    sceneDiningArea->addItem(counter2->getGraphicsItem());
    counter2->setPosition(500, 300, 100.0);

    sceneDiningArea->addItem(dish->getGraphicsItem());
    dish->setPosition(100, 505, 50.0);
    sceneDiningArea->addItem(dish2->getGraphicsItem());
    dish2->setPosition(95, 100, 25.0);



    for (int i = 0; i < 4; ++i) { // Ajoutons 4 chaises
        Chair *chair = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair->setPosition(70, 500, 100.0); break; // En haut
        case 1: chair->setPosition(160, 500, 100.0); break; // En bas
        case 2: chair->setPosition(115, 540, 100.0); break; // À gauche
        case 3: chair->setPosition(115, 460, 100.0); break; // À droite

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair->getGraphicsItem());
      }


    for (int i = 0; i < 6; ++i) { // Ajoutons 4 chaises
          Chair *chair2 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaise.png", i + 1, this);
          chairs.append(chair2);

          // Positionnez chaque chaise autour de la table
          switch (i) {
          case 0: chair2->setPosition(65, 105, 100.0); break; // En haut
          case 1: chair2->setPosition(135, 105, 100.0); break; // En bas
          case 2: chair2->setPosition(280, 105, 100.0); break; // À gauche
          case 3: chair2->setPosition(320, 105, 100.0); break; // À droite
          case 4: chair2->setPosition(480, 105, 100.0); break; // En haut
          case 5: chair2->setPosition(520, 105, 100.0); break; // En bas
          }

          // Ajoutez la chaise à la scène
          sceneDiningArea->addItem(chair2->getGraphicsItem());
      }

    for (int i = 0; i < 6; ++i) { // Ajoutons 4 chaises
        Chair *chair3 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaise.png", i + 1, this);
        chairs.append(chair3);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair3->setPosition(480, 205, 100.0); break; // En haut
        case 1: chair3->setPosition(520, 205, 100.0); break; // En bas
        case 2: chair3->setPosition(280, 205, 100.0); break; // À gauche
        case 3: chair3->setPosition(320, 205, 100.0); break; // À droite
        case 4: chair3->setPosition(65, 205, 100.0); break; // À gauche
        case 5: chair3->setPosition(135, 205, 100.0); break;
        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair3->getGraphicsItem());
    }

    for (int i = 0; i < 6; ++i) { // Ajoutons 4 chaises
        Chair *chair4 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaise.png", i + 1, this);
        chairs.append(chair4);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair4->setPosition(480, 25, 100.0); break; // En haut
        case 1: chair4->setPosition(520, 25, 100.0); break; // En bas
        case 2: chair4->setPosition(280, 25, 100.0); break; // À gauche
        case 3: chair4->setPosition(320, 25, 100.0); break; // À droite
        case 4: chair4->setPosition(65, 25, 100.0); break; // À gauche
        case 5: chair4->setPosition(135, 25, 100.0); break;
        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair4->getGraphicsItem());
    }


    // Configurez la scène pour la cuisine
    ui->kitchenAreaView->setScene(sceneKitchenArea);
    sceneKitchenArea->setSceneRect(0, 0, ui->kitchenAreaView->width(), ui->kitchenAreaView->height());


    // Ajoutez les objets à la cuisine
    sceneKitchenArea->addItem(counter->getGraphicsItem());
    counter->setPosition(25, 300, 100.0);

    sceneKitchenArea->addItem(washingMachine->getGraphicsItem());
    washingMachine->setPosition(550, 550, 100.0);

    sceneKitchenArea->addItem(dishwasher->getGraphicsItem());
    dishwasher->setPosition(550, 500, 100.0);

    sceneKitchenArea->addItem(cookChief->getGraphicsItem());
    cookChief->setPosition(80, 300, 100.0);

    sceneKitchenArea->addItem(washer->getGraphicsItem());
    washer->setPosition(525, 500, 100.0);

    sceneKitchenArea->addItem(washer2->getGraphicsItem());
    washer2->setPosition(525, 550, 100.0);

    sceneKitchenArea->addItem(stove->getGraphicsItem());
    stove->setPosition(550, 400, 100.0);

    sceneKitchenArea->addItem(cooker->getGraphicsItem());
    cooker->setPosition(510, 400, 100.0);




    // Connectez les boutons aux slots
    connect(ui->stratButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);

    // Connectez le timer à la mise à jour du temps et des déplacements
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimeDisplay);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClientPositions);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateServerPositions);


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

    int newX3 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY3 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client3->setPosition(newX3, newY3, 100.0);

    int newX4 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY4 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client4->setPosition(newX4, newY4, 100.0);

    int newX5 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY5 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client5->setPosition(newX5, newY5, 100.0);

    int newX6 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY6 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client6->setPosition(newX6, newY6, 100.0);

    int newX7 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY7 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client7->setPosition(newX7, newY7, 100.0);

    int newX8 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY8 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client8->setPosition(newX8, newY8, 100.0);


    int newX9 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY9 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client9->setPosition(newX9, newY9, 100.0);

    int newX10 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY10 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client10->setPosition(newX10, newY10, 100.0);

    int newX11 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY11 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client11->setPosition(newX11, newY11, 100.0);

    int newX12 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY12 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    client12->setPosition(newX12, newY12, 100.0);
}

// Mise à jour des positions des serveurs et du commis
void MainWindow::updateServerPositions()
{
    int newX1 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY1 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    server1->setPosition(newX1, newY1, 70.0);

    int newX2 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY2 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    server2->setPosition(newX2, newY2, 70.0);

    int newX3 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY3 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    server3->setPosition(newX3, newY3, 70.0);

    int newX4 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY4 = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    server4->setPosition(newX4, newY4, 70.0);

    int newX = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->width()) - 50);
    int newY = QRandomGenerator::global()->bounded(0, static_cast<int>(sceneDiningArea->height()) - 50);
    roomclerk->setPosition(newX, newY, 100.0);


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
    client->setPosition(79, 300, 100.0);
    client2->setPosition(79, 325, 100.0);
    client3->setPosition(79, 285, 100.0);
    client4->setPosition(79, 265, 100.0);
    client5->setPosition(59, 300, 100.0);
    client6->setPosition(59, 325, 100.0);
    client7->setPosition(59, 285, 100.0);
    client8->setPosition(59, 265, 100.0);
    client9->setPosition(39, 300, 100.0);
    client10->setPosition(39, 325, 100.0);
    client11->setPosition(39, 285, 100.0);
    client12->setPosition(39, 265, 100.0);
    server1->setPosition(100, 150, 70.0);
    server4->setPosition(375, 100, 70.0);
    server2->setPosition(100, 450, 70.0);
    server3->setPosition(400, 450, 70.0);
    roomclerk->setPosition(450, 250, 100.0);


}
