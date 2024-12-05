#include "KitchenController.h"
#include <iostream>

// Constructeur
KitchenController::KitchenController(Menu* menu, CookChief* chief, Counter* counter, Dishwasher* dishwasher, WashingMachine* washingMachine)
    : menu(menu), cookChief(chief), counter(counter), dishwasher(dishwasher), washingMachine(washingMachine) {}

// Ajouter une commande
void KitchenController::addCommand(Command* command) {
    std::cout << "Ajout d'une nouvelle commande..." << std::endl;
    counter->SendCommand(*command);
}

// Traiter les commandes
void KitchenController::processCommands() {
    std::cout << "Traitement des commandes en cours..." << std::endl;

    // Écouter les commandes
    Command command = counter->ListenCommands();
    cookChief->giveTasks();
    cookChief->divideTasks();

    // Simuler la préparation des plats
    std::cout << "Les cuisiniers préparent les plats..." << std::endl;
    for (Cooker* cooker : cookChief->getCookers()) {
        cooker->Run();
    }

    // Mettre à jour les plats prêts
    counter->readyDish += command.Dishes.size();
    std::cout << "Les plats sont prêts." << std::endl;
}

// Nettoyer la cuisine
void KitchenController::cleanKitchen() {
    std::cout << "Nettoyage de la cuisine en cours..." << std::endl;

    // Nettoyer les outils
    dishwasher->fillDishwasher();
    dishwasher->washMaterial();
    dishwasher->emptyDishwasher();

    // Nettoyer les matériaux
    washingMachine->FillWashingMachine();
    washingMachine->washMaterial();
    washingMachine->emptyWashingMachine();

    std::cout << "Cuisine nettoyée." << std::endl;
}

// Afficher le menu
void KitchenController::showMenu() const {
    std::cout << "Menu actuel : " << std::endl;
    for (const std::string& dish : menu->getDishes()) {
        std::cout << "- " << dish << std::endl;
    }
}

// Afficher les plats prêts
void KitchenController::showReadyDishes() const {
    std::cout << "Nombre de plats prêts : " << counter->readyDish << std::endl;
}

// Afficher les matériaux sales
void KitchenController::showDirtyMaterials() const {
    std::cout << "Nombre de matériaux sales : " << counter->dirtyDish << std::endl;
}

// Destructeur
KitchenController::~KitchenController() {
    delete menu;
    delete cookChief;
    delete counter;
    delete dishwasher;
    delete washingMachine;
}
