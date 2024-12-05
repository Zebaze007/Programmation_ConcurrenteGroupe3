#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QRandomGenerator>

#include "cleaner.h"
#include "command.h"
#include "cookchief.h"
#include "cooker.h"
#include "counter.h"
#include "dish.h"
#include "dishwasher.h"
#include "managetools.h"
#include "materials.h"
#include "menu.h"
#include "washer.h"
#include "washingmachine.h"
#include "tablecontroller.h"
#include "clientcontroller.h"
#include "countercontroller.h"
#include "washingmachinecontroller.h"
#include "dishwashercontroller.h"

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
    Table *table;                      // Première table
    Table *table2;                     // Deuxième table
    Table *table3;                     // Troisième table

    // Objets dans la cuisine
    Counter *counter;                  // Comptoir
    WashingMachine *washingMachine;    // Lave-linge
    Dishwasher *dishwasher;            // Lave-vaisselle

    // Gestion du temps
    QTimer *timer;                     // Timer pour le suivi du temps
    int elapsedSeconds;                // Temps écoulé en secondes
};

#endif // MAINWINDOW_H
