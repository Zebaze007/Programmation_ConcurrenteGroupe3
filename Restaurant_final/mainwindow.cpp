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
    , stove2(new Stove(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/Four.png", 1, this))
    , cookChief(new CookChief(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chef de cuisine.png", 1, this))
    , cooker(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , cooker2(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , assistant(new KitchenAssistant(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , assistant2(new KitchenAssistant(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
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
    , rankChief(new RankChief(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 4, this))
    , fridge(new Fridge(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/frigo.png", this))
    , rankChief2(new RankChief(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 4, this))
    , timer(new QTimer(this)) // Timer pour gérer les déplacements
    , elapsedSeconds(0) // Initialisation du temps écoulé
{
    ui->setupUi(this);


    // Configurez la scène pour la salle de restauration
    ui->diningAreaView->setScene(sceneDiningArea);
    sceneDiningArea->setSceneRect(0, 0, ui->diningAreaView->width(), ui->diningAreaView->height());

    // Ajoutez les objets à la salle de restauration



    sceneDiningArea->addItem(rankChief->getGraphicsItem());
    rankChief->setPosition(400, 400, 100.0);


    sceneDiningArea->addItem(rankChief2->getGraphicsItem());
    rankChief2->setPosition(400, 150, 100.0);


    sceneDiningArea->addItem(butler->getGraphicsItem());
    butler->setPosition(100, 300, 100.0);

    sceneDiningArea->addItem(client->getGraphicsItem());
    client->setPosition(79, 300, 100.0);

    sceneDiningArea->addItem(client2->getGraphicsItem());
    client2->setPosition(79, 325, 100.0);

    sceneDiningArea->addItem(client3->getGraphicsItem());
    client3->setPosition(79, 285, 100.0);


    sceneDiningArea->addItem(client10->getGraphicsItem());
    client10->setPosition(79, 400, 100.0);

    sceneDiningArea->addItem(client11->getGraphicsItem());
    client11->setPosition(145, 400, 100.0);

    sceneDiningArea->addItem(client12->getGraphicsItem());
    client12->setPosition(280, 500, 100.0);

    sceneDiningArea->addItem(server1->getGraphicsItem());
    server1->setPosition(100, 150, 70.0);

    sceneDiningArea->addItem(server4->getGraphicsItem());
    server4->setPosition(375, 100, 70.0);

    sceneDiningArea->addItem(server2->getGraphicsItem());
    server2->setPosition(70, 450, 70.0);

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

    for (int i = 0; i < 8; ++i) { // Ajoutons 4 chaises
        Chair *chair5 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair5);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair5->setPosition(70, 400, 100.0); break; // gauche
        case 1: chair5->setPosition(160, 400, 100.0); break; // droite
        case 2: chair5->setPosition(125, 440, 100.0); break; // haut
        case 3: chair5->setPosition(125, 360, 100.0); break; //bas
        case 4: chair5->setPosition(70, 415, 100.0); break; // gauche
        case 5: chair5->setPosition(160, 415, 100.0); break; // droite
        case 6: chair5->setPosition(100, 440, 100.0); break; // haut
        case 7: chair5->setPosition(100, 360, 100.0); break; //bas

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair5->getGraphicsItem());
    }
    for (int i = 0; i < 6; ++i) { // Ajoutons 4 chaises
        Chair *chair6 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair6);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair6->setPosition(270, 500, 100.0); break; // En haut
        case 1: chair6->setPosition(360, 500, 100.0); break; // En bas
        case 2: chair6->setPosition(325, 540, 100.0); break; // À gauche
        case 3: chair6->setPosition(325, 460, 100.0); break; // À droite
        case 4: chair6->setPosition(300, 540, 100.0); break; // À gauche
        case 5: chair6->setPosition(300, 460, 100.0); break; // À droite

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair6->getGraphicsItem());
    }
    for (int i = 0; i < 4; ++i) { // Ajoutons 4 chaises
        Chair *chair7 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair7);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair7->setPosition(270, 400, 100.0); break; // En haut
        case 1: chair7->setPosition(360, 400, 100.0); break; // En bas
        case 2: chair7->setPosition(315, 440, 100.0); break; // À gauche
        case 3: chair7->setPosition(315, 360, 100.0); break; // À droite

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair7->getGraphicsItem());
    }

    for (int i = 0; i < 4; ++i) { // Ajoutons 4 chaises
        Chair *chair8 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair8);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair8->setPosition(460, 400, 100.0); break; // En haut
        case 1: chair8->setPosition(570, 400, 100.0); break; // En bas
        case 2: chair8->setPosition(515, 440, 100.0); break; // À gauche
        case 3: chair8->setPosition(515, 360, 100.0); break; // À droite

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair8->getGraphicsItem());
    }


    for (int i = 0; i < 4; ++i) { // Ajoutons 4 chaises
        Chair *chair9 = new Chair(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chaiseP1.png", i + 1, this);
        chairs.append(chair9);

        // Positionnez chaque chaise autour de la table
        switch (i) {
        case 0: chair9->setPosition(460, 500, 100.0); break; // En haut
        case 1: chair9->setPosition(570, 500, 100.0); break; // En bas
        case 2: chair9->setPosition(515, 540, 100.0); break; // À gauche
        case 3: chair9->setPosition(515, 460, 100.0); break; // À droite

        }

        // Ajoutez la chaise à la scène
        sceneDiningArea->addItem(chair9->getGraphicsItem());
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

    sceneDiningArea->addItem(client4->getGraphicsItem());
    client4->setPosition(65, 105, 100.0);

    sceneDiningArea->addItem(client5->getGraphicsItem());
    client5->setPosition(135, 105, 100.0);

    sceneDiningArea->addItem(client6->getGraphicsItem());
    client6->setPosition(280, 105, 100.0);

    sceneDiningArea->addItem(client7->getGraphicsItem());
    client7->setPosition(320, 105, 100.0);

    sceneDiningArea->addItem(client8->getGraphicsItem());
    client8->setPosition(480, 105, 100.0);

    sceneDiningArea->addItem(client9->getGraphicsItem());
    client9->setPosition(520, 105, 100.0);


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

    sceneKitchenArea->addItem(stove2->getGraphicsItem());
    stove2->setPosition(550, 450, 100.0);

    sceneKitchenArea->addItem(cooker->getGraphicsItem());
    cooker->setPosition(510, 400, 100.0);

    sceneKitchenArea->addItem(fridge->getGraphicsItem());
    fridge->setPosition(510, 200, 100.0);

    sceneKitchenArea->addItem(cooker2->getGraphicsItem());
    cooker2->setPosition(510, 450, 100.0);

    sceneKitchenArea->addItem(assistant->getGraphicsItem());
    assistant->setPosition(480, 400, 100.0);

    sceneKitchenArea->addItem(assistant2->getGraphicsItem());
    assistant2->setPosition(480, 450, 100.0);



    // Connectez les boutons aux slots
    connect(ui->stratButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);

    // Connectez le timer à la mise à jour du temps et des déplacements
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimeDisplay);
    connect(timer, &QTimer::timeout, this, &MainWindow::moveClients);



    // Définir les points de départ et d'arrivée
    startPosition1 = QPoint(79, 300);
    endPosition1 = QPoint(70, 500);

    startPosition2 = QPoint(79, 325);
    endPosition2 = QPoint(160, 500);

    startPosition3 = QPoint(79, 325);
    endPosition3 = QPoint(115, 540);




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




void MainWindow::startClientMovement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerClient = new QTimer(this);
    connect(timerClient, &QTimer::timeout, [this]() {
        isReturningClient = true;
        moveClientInLoop(client, endPosition1, startPosition1, 10); // Retour au point de départ
    });

    timerClient2 = new QTimer(this);
    connect(timerClient2, &QTimer::timeout, [this]() {
        isReturningClient2 = true;
        moveClientInLoop(client2, endPosition2, startPosition2, 10); // Retour au point de départ
    });

    timerClient3 = new QTimer(this);
    connect(timerClient3, &QTimer::timeout, [this]() {
        isReturningClient3 = true;
        moveClientInLoop(client3, endPosition3, startPosition3, 10); // Retour au point de départ
    });

    // Initialiser le mouvement des clients
    timerClient->start(5000);  // Délai avant le retour pour client 1
    timerClient2->start(7000); // Délai avant le retour pour client 2
    timerClient3->start(8000); // Délai avant le retour pour client 3
}


void MainWindow::moveClients()
{
    // Déplacer chaque client d'un point à l'autre
    moveClientInLoop(client, startPosition1, endPosition1, 10);
    moveClientInLoop(client2, startPosition2, endPosition2, 10);
    moveClientInLoop(client3, startPosition3, endPosition3, 10);
}





// Slot pour le bouton Démarrer
void MainWindow::onStartButtonClicked()
{
    qDebug() << "Bouton Démarrer cliqué.";
    timer->start(1000); // Démarre le timer pour mises à jour toutes les 1000ms (1 seconde)

    // Démarre les timers spécifiques pour le mouvement des clients
    startClientMovement();
}

// Slot pour le bouton Pause
void MainWindow::onPauseButtonClicked()
{
    qDebug() << "Bouton Pause cliqué.";
    timer->stop(); // Arrête temporairement le timer

    // Arrêter les timers des clients pour stopper leur retour temporairement
    timerClient->stop();
    timerClient2->stop();
    timerClient3->stop();
}

// Slot pour le bouton Stopper
void MainWindow::onStopButtonClicked()
{
    qDebug() << "Bouton Stopper cliqué.";
    timer->stop();             // Arrête le timer
    elapsedSeconds = 0;        // Réinitialise le temps écoulé
    ui->timeButton->setText("Time: 0s"); // Réinitialise l'affichage

    // Arrête tous les timers
    timer->stop();
    timerClient->stop();
    timerClient2->stop();
    timerClient3->stop();

    // Réinitialise l'état des flags de retour
    isReturningClient = false;
    isReturningClient2 = false;
    isReturningClient3 = false;




    client->setPosition(79, 300, 100.0);
    client2->setPosition(79, 325, 100.0);
    client3->setPosition(79, 285, 100.0);
    client10->setPosition(39, 325, 100.0);
    client11->setPosition(39, 285, 100.0);
    client12->setPosition(39, 265, 100.0);
    server1->setPosition(100, 150, 70.0);
    server4->setPosition(375, 100, 70.0);
    server2->setPosition(100, 450, 70.0);
    server3->setPosition(400, 450, 70.0);
    roomclerk->setPosition(450, 250, 100.0);
    rankChief->setPosition(400, 400, 100.0);
    rankChief2->setPosition(400, 150, 100.0);

}

void MainWindow::moveClientInLoop(Client *client, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = client->getGraphicsItem()->pos().toPoint();

    // Calculer la direction du mouvement
    int deltaX = end.x() - currentPosition.x();
    int deltaY = end.y() - currentPosition.y();

    // Si le client n'a pas encore atteint la position finale, le déplacer progressivement
    if (abs(deltaX) > speed || abs(deltaY) > speed) {
        int stepX = (deltaX > 0) ? speed : (deltaX < 0) ? -speed : 0;
        int stepY = (deltaY > 0) ? speed : (deltaY < 0) ? -speed : 0;

        // Déplacer le client par un "pas" de la distance à chaque mise à jour
        int newX = currentPosition.x() + stepX;
        int newY = currentPosition.y() + stepY;

        client->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        client->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}
