#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QRandomGenerator>

#include "cleaner.h"
#include "command.h"
#include "commandcontroller.h"
#include "cookchief.h"
#include "cookchiefcontroller.h"
#include "counter.h"
#include "countercontroller.h"
#include "cookercontroller.h"
#include "chaircontroller.h"
#include "dish.h"
#include "dishcontroller.h"
#include "managetools.h"
#include "materials.h"
#include "menu.h"
#include "washer.h"
#include "tablecontroller.h"
#include "clientcontroller.h"
#include "washingmachinecontroller.h"
#include "dishwashercontroller.h"
#include "stovecontroller.h"
#include "servercontroller.h"
#include "roomclerkcontroller.h"
#include "roomclerk.h"
#include "washer.h"
#include "butlercontroller.h"
#include "rankchiefcontroller.h"
#include "rankchief.h"
#include "kitchenassistantcontroller.h"
#include "kitchenassistant.h"
#include "fridgecontroller.h"




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
    void onStartButtonClicked();       // Bouton Démarrer
    void onPauseButtonClicked();       // Bouton Pause
    void onStopButtonClicked();        // Bouton Stopper
    void onTakeOrderButtonClicked();
    void updateTimeDisplay();          // Mise à jour de l'affichage du temps
    void moveClients();
    void moveClientInLoop(Client *client, QPoint &start, QPoint &end, int speed);
    void moveRankChiefInLoop(RankChief *rankChief, QPoint &start, QPoint &end, int speed);


private:
    Ui::MainWindow *ui;

    // Scènes pour les différentes zones
    QGraphicsScene *sceneDiningArea;   // Salle de restauration
    QGraphicsScene *sceneKitchenArea;  // Cuisine

    // Objets dans la salle de restauration
    Client *client;                    // Premier client
    Client *client2;                   // Deuxième client
    Client *client3;
    Client *client4;
    Client *client5;
    Client *client6;
    Client *client7;
    Client *client8;
    Client *client9;
    Client *client10;
    Client *client11;
    Client *client12;
    Table *table;                      // Première table
    Table *table2;                     // Deuxième table
    Table *table5;
    Table *table6;
    Table *table14;
    Table *table15;


    Table *table3;                     // Troisième table
    Table *table4;
    Table *table7;
    Table *table8;
    Table *table9;
    Table *table10;
    Table *table11;
    Table *table12;
    Table *table13;
    Server *server1;
    Server *server2;
    Server *server3;
    Server *server4;
    RoomClerk *roomclerk;
    Dish *dish;
    Dish *dish2;
    Butler *butler;
    RankChief *rankChief;
    RankChief *rankChief2;



    // Objets dans la cuisine
    Counter *counter;                  // Comptoir
    Counter *counter2;
    WashingMachine *washingMachine;    // Lave-linge
    Dishwasher *dishwasher;            // Lave-vaisselle
    Stove *stove;                      // four
    Stove *stove2;
    CookChief *cookChief;              //chef cuisto
    Cooker *cooker;                    //chefs de partie
    Cooker *cooker2;
    Washer *washer;
    Washer *washer2;
    QVector<Chair*> chairs;            //chaises
    QVector<Chair*> chairs2;
    QVector<Chair*> chairs3;
    QVector<Chair*> chairs4;
    QVector<Chair*> chairs5;
    QVector<Chair*> chairs6;
    QVector<Chair*> chairs7;
    QVector<Chair*> chairs8;
    QVector<Chair*> chairs9;
    KitchenAssistant *assistant;       //commis de cuisine
    KitchenAssistant *assistant2;
    Fridge *fridge;

    // Gestion du temps
    QTimer *timer;                     // Timer pour le suivi du temps
    int elapsedSeconds;                // Temps écoulé en secondes

    // Définir les points de départ et d'arrivée
    QPoint startPosition1, endPosition1;
    QPoint startPosition2, endPosition2;
    QPoint startPosition3, endPosition3;
    QPoint rankChiefStartPosition;
    QPoint rankChiefEndPosition;

    // Timers pour chaque client
    QTimer *timerClient;
    QTimer *timerClient2;
    QTimer *timerClient3;
    QTimer *timerRankChief;



    // Indicateurs pour savoir si les clients sont en mouvement
    bool isReturningClient = false;
    bool isReturningClient2 = false;
    bool isReturningClient3 = false;
    bool isReturningRankChief = false;



    void startClientMovement();  // Démarrer le mouvement des clients

    // Méthode pour déplacer un client entre deux points
    void moveClientInLoop(Client *client, const QPoint &start, const QPoint &end, int speed);
};

#endif // MAINWINDOW_H
