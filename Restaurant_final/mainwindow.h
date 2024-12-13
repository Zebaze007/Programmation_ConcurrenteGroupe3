
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
#include "dashboard.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void moveDishInLoop(Dish *dish3, const QPoint &start, const QPoint &end, int speed); // Public


public slots:
    void onStartButtonClicked();       // Bouton Démarrer
    void onPauseButtonClicked();       // Bouton Pause
    void onStopButtonClicked();        // Bouton Stopper
    void onTakeOrderButtonClicked();
    void onServeFoodButtonClicked();
    void updateTimeDisplay();          // Mise à jour de l'affichage du temps
    void moveClients();
    void moveClientOnce(Client *client, QPoint &start, QPoint &end, int speed);
    void moveRankChiefOnce(RankChief *rankChief, QPoint &start, QPoint &end, int speed);
    void onClearTableButtonClicked();
    void onSpeedButtonClicked(); // Slot for the Accelerate button
    void openDashboard(); // Fonction pour ouvrir le Dashboard
    void moveKitchenAssistants();
    void moveWasher();
    void moveCooker();
    void moveCooker2();
    void moveCooker3();
    void moveCooker4();
    void moveCooker5();
    void moveDish();
    void moveKitchenAssistant();
    void moveKitchenAssistant2();
    void moveWasherInLoop(Washer *washer, QPoint &start, QPoint &end, int speed);
    void moveCookerInLoop(Cooker *cooker, QPoint &start, QPoint &end, int speed);
    void moveCooker2InLoop(Cooker *cooker2, QPoint &start, QPoint &end, int speed);
    void moveCooker3InLoop(Cooker *cooker3, QPoint &start, QPoint &end, int speed);
    void moveCooker4InLoop(Cooker *cooker4, QPoint &start, QPoint &end, int speed);
    void moveCooker5InLoop(Cooker *cooker5, QPoint &start, QPoint &end, int speed);
    void moveRankChiefInLoop(QPoint &start, QPoint &end, int speed);
    void moveDishInLoop(QPoint &start, QPoint &end, int speed);



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
    Client *client13;
    Client *client14;
    Client *client15;
    Client *client16;
    Client *client17;
    Client *client18;
    Client *client19;
    Client *client20;
    Client *client21;
    Client *client22;
    Client *client23;
    Client *client24;
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
    Dish *dish3;
    Butler *butler;
    RankChief *rankChief;
    RankChief *rankChief2;



    // Objets dans la cuisine
    Counter *counter;                  // Comptoir
    Counter *counter2;
    Counter *counter3;
    Counter *counter4;
    WashingMachine *washingMachine;    // Lave-linge
    Dishwasher *dishwasher;            // Lave-vaisselle
    Stove *stove;                      // four
    Stove *stove2;
    CookChief *cookChief;              //chef cuisto
    Cooker *cooker;                    //chefs de partie
    Cooker *cooker2;
    Cooker *cooker3;
    Cooker *cooker4;
    Cooker *cooker5;
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
    QPoint startPosition4, endPosition4;
    QPoint startPosition5, endPosition5;
    QPoint startPosition6, endPosition6;
    QPoint startPosition7, endPosition7;
    QPoint startPosition8, endPosition8;
    QPoint startPosition9, endPosition9;
    QPoint startPosition10, endPosition10;
    QPoint startPosition11, endPosition11;
    QPoint startPosition12, endPosition12;
    QPoint startPosition13, endPosition13;
    QPoint startPosition14, endPosition14;
    QPoint startPosition15, endPosition15;
    QPoint startPosition16, endPosition16;
    QPoint startPosition17, endPosition17;
    QPoint startPosition18, endPosition18;
    QPoint startPosition19, endPosition19;
    QPoint startPosition20, endPosition20;
    QPoint startPosition21, endPosition21;
    QPoint startPosition22, endPosition22;
    QPoint startPosition23, endPosition23;
    QPoint startPosition24, endPosition24;
    QPoint rankChiefStartPosition;
    QPoint rankChiefEndPosition;
    QPoint serverStartPosition; // Position initiale
    QPoint serverCounterPosition; // Position du comptoir
    QPoint serverTablePosition; // Position de la table
    QPoint serverEndPosition;
    QPoint dishPosition;
    QPoint startPositionWasher;
    QPoint endPositionWasher;
    QPoint startPositionCooker;
    QPoint endPositionCooker;
    QPoint startPositionCooker2;
    QPoint endPositionCooker2;
    QPoint startPositionCooker3;
    QPoint endPositionCooker3;
    QPoint startPositionCooker4;
    QPoint endPositionCooker4;
    QPoint startPositionCooker5;
    QPoint endPositionCooker5;
    QPoint startPositionKitchenAssistant;
    QPoint endPositionKitchenAssistant;
    QPoint startPositionKitchenAssistant2;
    QPoint endPositionKitchenAssistant2;
    QPoint startPositionDish;
    QPoint endPositionDish;


    // Timers pour chaque client
    QTimer *timerClient;
    QTimer *timerClient2;
    QTimer *timerClient3;
    QTimer *timerRankChief;
    QTimer *timerServer;
    QTimer *timerWasher;
    QTimer *timerCooker;
    QTimer *timerCooker2;
    QTimer *timerCooker3;
    QTimer *timerCooker4;
    QTimer *timerCooker5;
    QTimer *timerKitchenAssistant;
    QTimer *timerKitchenAssistant2;
    QTimer *timerDish;



    // Indicateurs pour savoir si les clients sont en mouvement
    bool isReturningClient = false;
    bool isReturningClient2 = false;
    bool isReturningClient3 = false;
    bool isReturningRankChief = false;
    bool isReturningServer = false;
    bool isTimerClientActive = false;
    bool isTimerClient2Active = false;
    bool isTimerClient3Active = false;
    bool isTimerRankChiefActive = false;
    bool isTimerServerActive = false;
    bool isReturningWasher = false;
    bool isReturningCooker = false;
    bool isReturningCooker2 = false;
    bool isReturningCooker3 = false;
    bool isReturningCooker4 = false;
    bool isReturningCooker5 = false;
    bool isReturningKitchenAssistant = false;
    bool isReturningKitchenAssistant2 = false;
    bool isReturningDish = false;



    void startClientMovement();  // Démarrer le mouvement des clients
    void startWasherMovement();
    void startCookerMovement();
    void startCooker2Movement();
    void startCooker3Movement();
    void startCooker4Movement();
    void startCooker5Movement();
    void startDishMovement();
    void startKitchenAssistantMovement();
    void startKitchenAssistant2Movement();


    // Méthode pour déplacer un client entre deux points
    void moveClientOnce(Client *client, const QPoint &start, const QPoint &end, int speed);

    void moveServerOnce(Server *server, QPoint &start, QPoint &end, int speed);
    void hideDiningRoomElements(); // Hides all clients and staff in the dining room
    void showDiningRoomElements(); // Shows all clients and staff in the dining room

    // Méthode pour déplacer un washer entre deux points
    void moveWasherInLoop(Washer *washer, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un cooker entre deux points
    void moveCookerInLoop(Cooker *cooker, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un cooker2 entre deux points
    void moveCooker2InLoop(Cooker *cooker2, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un cooker entre deux points
    void moveCooker3InLoop(Cooker *cooker3, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un cooker2 entre deux points
    void moveCooker4InLoop(Cooker *cooker4, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un cooker2 entre deux points
    void moveCooker5InLoop(Cooker *cooker5, const QPoint &start, const QPoint &end, int speed);



    // Méthode pour déplacer un assistant entre deux points
    void moveKitchenAssistantInLoop(KitchenAssistant *assistant, const QPoint &start, const QPoint &end, int speed);

    // Méthode pour déplacer un assistant entre deux points
    void moveKitchenAssistant2InLoop(KitchenAssistant *assistant2, const QPoint &start, const QPoint &end, int speed);



};

#endif // MAINWINDOW_H
