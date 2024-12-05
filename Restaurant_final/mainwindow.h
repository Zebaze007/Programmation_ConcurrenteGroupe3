#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QRandomGenerator>

#include "cleaner.h"
#include "command.h"

#include "dish.h"
#include "managetools.h"
#include "materials.h"
#include "menu.h"
#include "washer.h"
#include "tablecontroller.h"
#include "clientcontroller.h"
#include "counter.h"
#include "countercontroller.h"
#include "washingmachinecontroller.h"
#include "dishwashercontroller.h"
#include "stovecontroller.h"
#include "cookchief.h"
#include "cookchiefcontroller.h"
#include "cookercontroller.h"
#include "chaircontroller.h"

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
    void updateTimeDisplay();          // Mise à jour de l'affichage du temps
    void updateClientPositions();      // Mise à jour des positions des clients

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
    Table *table;                      // Première table
    Table *table2;                     // Deuxième table
    Table *table5;
    Table *table6;


    Table *table3;                     // Troisième table
    Table *table4;
    Table *table7;
    Table *table8;
    Table *table9;
    Table *table10;
    Table *table11;
    Table *table12;
    Table *table13;

    // Objets dans la cuisine
    Counter *counter;                  // Comptoir
    Counter *counter2;
    WashingMachine *washingMachine;    // Lave-linge
    Dishwasher *dishwasher;            // Lave-vaisselle
    Stove *stove;                      // four
    CookChief *cookChief;              //chef cuisto
    Cooker *cooker;                    //cuisinier
    QVector<Chair*> chairs;            //chaises
    QVector<Chair*> chairs2;
    QVector<Chair*> chairs3;
    QVector<Chair*> chairs4;



    // Gestion du temps
    QTimer *timer;                     // Timer pour le suivi du temps
    int elapsedSeconds;                // Temps écoulé en secondes
};

#endif // MAINWINDOW_H
