#include "Controller.h"

Controller::Controller() : config(nullptr), restaurant(nullptr) {}

void Controller::saveSimulation() {
    // Implémente la logique pour sauvegarder la simulation.
}

void Controller::loadSimulation() {
    // Implémente la logique pour charger une simulation existante.
}

void Controller::startSimulation() {
    // Implémente la logique pour démarrer la simulation.
}

void Controller::stopSimulation() {
    // Implémente la logique pour arrêter la simulation.
}

Controller::~Controller() {
    delete config;
    delete restaurant;
}
