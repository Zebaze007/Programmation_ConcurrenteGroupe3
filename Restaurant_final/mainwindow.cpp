#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboard.h"
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
     , client13(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso3.png", 4, this))
     , client14(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso4.png", 4, this))
     , client15(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso5.png", 4, this))
     , client16(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso7.png", 4, this))
     , client17(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso8.png", 4, this))
     , client18(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso10.png", 4, this))
     , client19(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso3.png", 4, this))
     , client20(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
     , client21(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
     , client22(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
     , client23(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
     , client24(new Client(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/perso9.png", 4, this))
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
    , counter3(new Counter(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoircomplet.png", 2, this))
    , counter4(new Counter(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoircomplet.png", 2, this))
    , washingMachine(new WashingMachine(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavelinge.png", 1, this))
    , dishwasher(new Dishwasher(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/lavevaissel.png", 1, this)) // Crée le lave-vaisselle
    , stove(new Stove(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/Four.png", 1, this))
    , stove2(new Stove(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/Four.png", 1, this))
    , cookChief(new CookChief(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/chef de cuisine.png", 1, this))
    , cooker(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , cooker2(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
     , cooker3(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 1, this))
     , cooker4(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 1, this))
     , cooker5(new Cooker(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 1, this))
    , assistant(new KitchenAssistant(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , assistant2(new KitchenAssistant(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/cuisto.png", 1, this))
    , server1(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 1, this))
    , server2(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 2, this))
    , server3(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 3, this))
    , server4(new Server(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/serveur.png", 4, this))
    , roomclerk(new RoomClerk(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/commis.png", 4, this))
    , dish(new Dish(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 4, this))
    , dish2(new Dish(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 4, this))
    , dish3(new Dish(":/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/plate.png", 4, this))
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

    sceneDiningArea->addItem(client13->getGraphicsItem());
    client13->setPosition(280, 200, 100.0);

    sceneDiningArea->addItem(client14->getGraphicsItem());
    client14->setPosition(320, 200, 100.0);

    sceneDiningArea->addItem(client15->getGraphicsItem());
    client15->setPosition(480, 200, 100.0);

    sceneDiningArea->addItem(client16->getGraphicsItem());
    client16->setPosition(520, 200, 100.0);

    sceneDiningArea->addItem(client17->getGraphicsItem());
    client17->setPosition(80, 25, 100.0);

    sceneDiningArea->addItem(client18->getGraphicsItem());
    client18->setPosition(120, 25, 100.0);

    sceneDiningArea->addItem(client19->getGraphicsItem());
    client19->setPosition(280, 25, 100.0);

    sceneDiningArea->addItem(client20->getGraphicsItem());
    client20->setPosition(320, 25, 100.0);

    sceneDiningArea->addItem(client21->getGraphicsItem());
    client21->setPosition(480, 25, 100.0);

    sceneDiningArea->addItem(client22->getGraphicsItem());
    client22->setPosition(520, 25, 100.0);

    sceneDiningArea->addItem(client23->getGraphicsItem());
    client23->setPosition(100, 535, 100.0);

    sceneDiningArea->addItem(client24->getGraphicsItem());
    client24->setPosition(100, 480, 100.0);

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

    //sceneKitchenArea->addItem(assistant->getGraphicsItem());
    //assistant->setPosition(480, 400, 100.0);

    //sceneKitchenArea->addItem(assistant2->getGraphicsItem());
    //assistant2->setPosition(480, 450, 100.0);

    sceneKitchenArea->addItem(counter3->getGraphicsItem());
    counter3->setPosition(60, 46, 100.0);

    sceneKitchenArea->addItem(counter4->getGraphicsItem());
    counter4->setPosition(350, 46, 100.0);

    //sceneKitchenArea->addItem(dish2->getGraphicsItem());
    //dish3->setPosition(60, 35, 50.0);

    sceneKitchenArea->addItem(cooker5->getGraphicsItem());
    cooker5->setPosition(60, 35, 50.0);

    sceneKitchenArea->addItem(cooker3->getGraphicsItem());
    cooker3->setPosition(480, 400, 100.0);

    sceneKitchenArea->addItem(cooker4->getGraphicsItem());
    cooker4->setPosition(480, 450, 100.0);

    // Connectez les boutons aux slots
    connect(ui->stratButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);
    connect(ui->takeOrderButton, &QPushButton::clicked, this, &MainWindow::onTakeOrderButtonClicked);
    connect(ui->serveFoodButton, &QPushButton::clicked, this, &MainWindow::onServeFoodButtonClicked);
    connect(ui->clearTableButton, &QPushButton::clicked, this, &MainWindow::onClearTableButtonClicked);
    connect(ui->speedButton, &QPushButton::clicked, this, &MainWindow::onSpeedButtonClicked);

    // Connecter le bouton "Dashboard" à une fonction pour ouvrir la fenêtre Dashboard
    connect(ui->customerMoodButton, &QPushButton::clicked, this, &MainWindow::openDashboard);




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


    rankChiefStartPosition = QPoint(400, 400);
    rankChiefEndPosition= QPoint(150, 520);

    startPositionWasher = QPoint(525, 500);
    endPositionWasher = QPoint(100, 40);

    startPositionCooker = QPoint(510, 400);
    endPositionCooker = QPoint(70, 300);

    startPositionCooker2 = QPoint(510, 440);
    endPositionCooker2 = QPoint(70, 300);

    startPositionCooker3 = QPoint(400, 400);
    endPositionCooker3 = QPoint(390, 46);

    startPositionCooker4 = QPoint(400, 450);
    endPositionCooker4 = QPoint(330, 41);

    startPositionDish = QPoint(60, 35);
    endPositionDish = QPoint(0, 0);


    // Positions du serveur
    serverStartPosition = QPoint(100, 150);  // Position initiale
    serverCounterPosition = QPoint(500, 300); // Position du comptoir
    serverTablePosition = QPoint(100, 100);   // Position de la table

    // Position de l'assiette sur la table
    dishPosition = QPoint(95, 100);


}


void MainWindow::openDashboard() {
    // Créer et afficher la fenêtre Dashboard
    Dashboard *dashboard = new Dashboard(this); // `this` comme parent pour gestion automatique de mémoire
    dashboard->show();
}

void MainWindow::startClientMovement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Check if the current time is at least 10:00 AM
    int currentHour = 8 + (elapsedSeconds / 60); // Calculate hour based on elapsedSeconds
    currentHour = currentHour % 24; // Ensure the hour wraps correctly in a 24-hour format

    if (currentHour < 10) {
        qDebug() << "Mouvement des clients retardé. Actuellement avant 10:00 AM.";
        return; // Exit without starting movement
    }

    // Démarre les timers pour animer les déplacements des clients
    timerClient = new QTimer(this);
    connect(timerClient, &QTimer::timeout, [this]() {
        isReturningClient = true;
        moveClientOnce(client, endPosition1, startPosition1, 10); // Retour au point de départ
    });

    timerClient2 = new QTimer(this);
    connect(timerClient2, &QTimer::timeout, [this]() {
        isReturningClient2 = true;
        moveClientOnce(client2, endPosition2, startPosition2, 10); // Retour au point de départ
    });

    timerClient3 = new QTimer(this);
    connect(timerClient3, &QTimer::timeout, [this]() {
        isReturningClient3 = true;
        moveClientOnce(client3, endPosition3, startPosition3, 10); // Retour au point de départ
    });

    // Initialiser le mouvement des clients
    timerClient->start(5000);  // Délai avant le retour pour client 1
    timerClient2->start(7000); // Délai avant le retour pour client 2
    timerClient3->start(8000); // Délai avant le retour pour client 3

    qDebug() << "Mouvement des clients initialisé à partir de 10:00 AM.";
}

void MainWindow::startWasherMovement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerWasher = new QTimer(this);
    connect(timerWasher, &QTimer::timeout, [this]() {
        isReturningWasher = true;
        moveWasherInLoop(washer, endPositionWasher, startPositionWasher, 15); // Retour au point de départ
    });



    // Initialiser le mouvement des clients
    timerWasher->start(500);  // Délai avant le retour pour client 1

}

void MainWindow::startCookerMovement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerCooker = new QTimer(this);
    connect(timerCooker, &QTimer::timeout, [this]() {
        isReturningCooker = true;
        moveCookerInLoop(cooker, endPositionCooker, startPositionCooker, 15); // Retour au point de départ
    });



    // Initialiser le mouvement des clients
    timerCooker->start(500);  // Délai avant le retour pour client 1

}

void MainWindow::startCooker2Movement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerCooker2 = new QTimer(this);
    connect(timerCooker2, &QTimer::timeout, [this]() {
        isReturningCooker = true;
        moveCookerInLoop(cooker2, endPositionCooker2, startPositionCooker2, 15); // Retour au point de départ
    });



    // Initialiser le mouvement des clients
    timerCooker2->start(500);  // Délai avant le retour pour client 1

}

void MainWindow::startCooker3Movement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerCooker3 = new QTimer(this);
    connect(timerCooker3, &QTimer::timeout, [this]() {
        isReturningCooker3 = true;
        moveCookerInLoop(cooker3, endPositionCooker3, startPositionCooker3, 15); // Retour au point de départ
    });



    // Initialiser le mouvement des clients
    timerCooker3->start(500);  // Délai avant le retour pour client 1

}


void MainWindow::startCooker4Movement()
{
    qDebug() << "Mouvement des clients démarré.";

    // Démarre les timers pour animer les déplacements des clients
    timerCooker4 = new QTimer(this);
    connect(timerCooker4, &QTimer::timeout, [this]() {
        isReturningCooker4 = true;
        moveCookerInLoop(cooker4, endPositionCooker4, startPositionCooker4, 15); // Retour au point de départ
    });



    // Initialiser le mouvement des clients
    timerCooker4->start(500);  // Délai avant le retour pour client 1

}





void MainWindow::moveClients()
{
    // Déplacer chaque client d'un point à l'autre
    moveClientOnce(client, startPosition1, endPosition1, 10);
    moveClientOnce(client2, startPosition2, endPosition2, 10);
    moveClientOnce(client3, startPosition3, endPosition3, 10);
}





void MainWindow::moveClientOnce(Client *client, QPoint &start, QPoint &end, int speed)
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
        // Une fois que le client atteint la destination finale, aligner sa position exacte
        client->setPosition(end.x(), end.y(), 100.0);
    }
}

void MainWindow::moveWasher()
{
    // Déplacer chaque client d'un point à l'autre
    moveWasherInLoop(washer, startPositionWasher, endPositionWasher, 150);

}

void MainWindow::moveCooker()
{
    // Déplacer chaque client d'un point à l'autre
    moveCookerInLoop(cooker, startPositionCooker, endPositionCooker, 150);

}

void MainWindow::moveCooker2()
{
    // Déplacer chaque client d'un point à l'autre
    moveCooker2InLoop(cooker2, startPositionCooker2, endPositionCooker2, 150);

}

void MainWindow::moveCooker3()
{
    // Déplacer chaque client d'un point à l'autre
    moveCooker3InLoop(cooker3, startPositionCooker3, endPositionCooker3, 150);

}

void MainWindow::moveCooker4()
{
    // Déplacer chaque client d'un point à l'autre
    moveCooker4InLoop(cooker4, startPositionCooker4, endPositionCooker4, 150);

}



void MainWindow::moveRankChiefOnce(RankChief *rankChief, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du RankChief
    QPoint currentPosition = rankChief->getGraphicsItem()->pos().toPoint();

    // Calculer la direction du mouvement
    int deltaX = end.x() - currentPosition.x();
    int deltaY = end.y() - currentPosition.y();

    // Si le RankChief n'a pas encore atteint la position finale, le déplacer progressivement
    if (abs(deltaX) > speed || abs(deltaY) > speed) {
        int stepX = (deltaX > 0) ? speed : (deltaX < 0) ? -speed : 0;
        int stepY = (deltaY > 0) ? speed : (deltaY < 0) ? -speed : 0;

        // Déplacer le RankChief par un "pas" de la distance à chaque mise à jour
        int newX = currentPosition.x() + stepX;
        int newY = currentPosition.y() + stepY;

        rankChief->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le RankChief atteint la destination, aligner parfaitement la position
        rankChief->setPosition(end.x(), end.y(), 100.0);
    }
}


void MainWindow::moveServerOnce(Server *server, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du serveur
    QPoint currentPosition = server->getGraphicsItem()->pos().toPoint();

    // Calculer la direction du mouvement
    int deltaX = end.x() - currentPosition.x();
    int deltaY = end.y() - currentPosition.y();

    // Si le serveur n'a pas encore atteint la position finale, le déplacer progressivement
    if (abs(deltaX) > speed || abs(deltaY) > speed) {
        int stepX = (deltaX > 0) ? speed : (deltaX < 0) ? -speed : 0;
        int stepY = (deltaY > 0) ? speed : (deltaY < 0) ? -speed : 0;

        // Déplacer le serveur par un "pas" de la distance à chaque mise à jour
        int newX = currentPosition.x() + stepX;
        int newY = currentPosition.y() + stepY;

        server->setPosition(newX, newY, 70.0); // Déplacer le serveur
    } else {
        // Une fois que le serveur atteint la destination, aligner parfaitement la position
        server->setPosition(end.x(), end.y(), 70.0); // Alignement exact sur la destination
    }
}

void MainWindow::moveWasherInLoop(Washer *washer, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = washer->getGraphicsItem()->pos().toPoint();

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

        washer->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        washer->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}



void MainWindow::moveCookerInLoop(Cooker *cooker, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = cooker->getGraphicsItem()->pos().toPoint();

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

        cooker->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        cooker->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}

void MainWindow::moveCooker2InLoop(Cooker *cooker2, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = cooker2->getGraphicsItem()->pos().toPoint();

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

        cooker2->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        cooker2->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}


void MainWindow::moveCooker3InLoop(Cooker *cooker3, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = cooker3->getGraphicsItem()->pos().toPoint();

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

        cooker3->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        cooker3->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}


void MainWindow::moveCooker4InLoop(Cooker *cooker4, QPoint &start, QPoint &end, int speed)
{
    // Obtenir la position actuelle du client
    QPoint currentPosition = cooker4->getGraphicsItem()->pos().toPoint();

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

        cooker4->setPosition(newX, newY, 100.0);
    } else {
        // Une fois que le client atteint la destination, inverser les points de départ et de fin
        cooker4->setPosition(end.x(), end.y(), 100.0); // Alignement parfait sur la position finale
        QPoint temp = start;
        start = end;
        end = temp; // Inversion pour le retour
    }
}






void MainWindow::onServeFoodButtonClicked()
{
    qDebug() << "Bouton Servir la nourriture cliqué.";

    timerServer = new QTimer(this);
    connect(timerServer, &QTimer::timeout, [this]() {
        static int phase = 0; // Phase de déplacement : 0 = vers comptoir, 1 = vers table, 2 = retour initial

        if (phase == 0) {
            moveServerOnce(server1, serverStartPosition, serverCounterPosition, 10); // Déplacer vers le comptoir
            if (server1->getGraphicsItem()->pos() == serverCounterPosition) {
                phase = 1; // Passer à la phase suivante
            }
        } else if (phase == 1) {
            moveServerOnce(server1, serverCounterPosition, serverTablePosition, 10); // Déplacer vers la table
            if (server1->getGraphicsItem()->pos() == serverTablePosition) {


                phase = 2; // Passer à la phase suivante
            }
        } else if (phase == 2) {
            moveServerOnce(server1, serverTablePosition, serverStartPosition, 10); // Retour à la position initiale
            if (server1->getGraphicsItem()->pos() == serverStartPosition) {
                timerServer->stop(); // Arrêter le mouvement
                phase = 0; // Réinitialiser la phase pour la prochaine utilisation
            }
        }
    });

    timerServer->start(1000); // Mise à jour toutes les 100 ms
}

void MainWindow::onClearTableButtonClicked()
{
    qDebug() << "Bouton Débarrasser la table cliqué.";

    // Supprimer l'assiette de la scène graphique
    if (dish) {

        delete dish; // Supprimer l'objet
        dish = nullptr; // Réinitialiser le pointeur
    }

    qDebug() << "Assiette retirée de la table.";
}



void MainWindow::onTakeOrderButtonClicked()
{
    qDebug() << "Bouton Prendre la commande cliqué.";

    // Démarrer le timer pour le RankChief
    timerRankChief = new QTimer(this);
    connect(timerRankChief, &QTimer::timeout, [this]() {
        moveRankChiefOnce(rankChief, rankChiefStartPosition, rankChiefEndPosition, 10);
    });

    timerRankChief->start(1000); // Mise à jour toutes les 100 ms
}
void MainWindow::hideDiningRoomElements()
{
    // Hide all customers
    client->getGraphicsItem()->hide();
    client2->getGraphicsItem()->hide();
    client3->getGraphicsItem()->hide();
    client4->getGraphicsItem()->hide();
    client5->getGraphicsItem()->hide();
    client6->getGraphicsItem()->hide();
    client7->getGraphicsItem()->hide();
    client8->getGraphicsItem()->hide();
    client9->getGraphicsItem()->hide();
    client10->getGraphicsItem()->hide();
    client11->getGraphicsItem()->hide();
    client12->getGraphicsItem()->hide();
    dish->getGraphicsItem()->hide();
    dish2->getGraphicsItem()->hide();


}

void MainWindow::showDiningRoomElements()
{
    // Show all customers
    client->getGraphicsItem()->show();
    client2->getGraphicsItem()->show();
    client3->getGraphicsItem()->show();
    client4->getGraphicsItem()->show();
    client5->getGraphicsItem()->show();
    client6->getGraphicsItem()->show();
    client7->getGraphicsItem()->show();
    client8->getGraphicsItem()->show();
    client9->getGraphicsItem()->show();
    client10->getGraphicsItem()->show();
    client11->getGraphicsItem()->show();
    client12->getGraphicsItem()->show();
    dish->getGraphicsItem()->show();
    dish2->getGraphicsItem()->show();

}




MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
    delete timerRankChief;
    delete timerServer;


}


// Mise à jour de l'affichage du temps
void MainWindow::updateTimeDisplay()
{
    // Increment elapsed time by 1 second regularly
    elapsedSeconds++;

    // Calculate hours and minutes as before
    int hours = 8 + (elapsedSeconds / 60); // 1 "hour" = 60 seconds
    int minutes = (elapsedSeconds % 60);
    hours = hours % 24;

    // Format and display the time
    ui->timeButton->setText(QString("Time: %1:%2")
                                .arg(hours, 2, 10, QChar('0'))
                                .arg(minutes, 2, 10, QChar('0')));

    // Check if it's between 8:00 and 10:00
    if (hours >= 8 && hours < 10) {
        hideDiningRoomElements(); // Hide staff and customers
    } else {
        showDiningRoomElements(); // Show staff and customers outside this period
        // Check and start client movement at 10:00 AM
        if (hours == 10 && minutes == 0) {
            startClientMovement();
        }
    }
}
void MainWindow::onSpeedButtonClicked()
{
    qDebug() << "Acceleration button clicked.";

    // Increase elapsed time by 10 seconds
    elapsedSeconds += 10;

    // Ensure time is updated immediately after the increment
    updateTimeDisplay();
}





// Slot pour le bouton Démarrer
void MainWindow::onStartButtonClicked()
{
    qDebug() << "Bouton Démarrer cliqué.";

    // Start the main timer if not already active
    if (!timer->isActive()) {
        timer->start(1000); // Update every 1 second
    }

    startCookerMovement();
    startCooker2Movement();
    startCooker3Movement();
    startCooker4Movement();
    startWasherMovement();


}


// Slot pour le bouton Pause
void MainWindow::onPauseButtonClicked()
{
    qDebug() << "Bouton Pause cliqué.";


    // Arrêter le timer principal
    timer->stop();
}


// Slot pour le bouton Stopper
void MainWindow::onStopButtonClicked()
{
    qDebug() << "Bouton Stopper cliqué.";
    timer->stop();             // Arrête le timer
    elapsedSeconds = 0;        // Réinitialise le temps écoulé
    ui->timeButton->setText("Time: 0s"); // Réinitialise l'affichage

    // Arrête tous les timers
    if (timer) timer->stop();





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
