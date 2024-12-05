#ifndef KITCHENCONTROLLER_H
#define KITCHENCONTROLLER_H

#include "Menu.h"
#include "Cooker.h"
#include "CookChief.h"
#include "Counter.h"
#include "Dishwasher.h"
#include "WashingMachine.h"

class KitchenController {
private:
    Menu* menu;
    CookChief* cookChief;
    Counter* counter;
    Dishwasher* dishwasher;
    WashingMachine* washingMachine;

public:
    // Constructeur
    KitchenController(Menu* menu, CookChief* chief, Counter* counter, Dishwasher* dishwasher, WashingMachine* washingMachine);

    // Méthodes principales
    void addCommand(Command* command);           // Ajouter une commande
    void processCommands();                      // Traiter les commandes
    void cleanKitchen();                         // Nettoyer les matériaux et les outils

    // Méthodes utilitaires
    void showMenu() const;                       // Afficher le menu
    void showReadyDishes() const;                // Afficher les plats prêts
    void showDirtyMaterials() const;             // Afficher les matériaux sales

    ~KitchenController(); // Destructeur
};

#endif // KITCHENCONTROLLER_H
