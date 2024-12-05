#include "CookChiefController.h"

CookChiefController::CookChiefController(CookChief* cookChief, Counter* counter, ManageTools* toolManager)
    : cookChief(cookChief), counter(counter), toolManager(toolManager) {}

CookChiefController::~CookChiefController() {}

void CookChiefController::listenForCommands() {
    // Récupérer une commande depuis le Counter
    Command command = counter->ListenCommands();
    cookChief->divideTasks(command); // Diviser les tâches de la commande
}

void CookChiefController::assignTasks() {
    // Gérer les cuisiniers et assigner les tâches
    cookChief->giveTasks();
}

void CookChiefController::updateMenu() {
    // Mettre à jour le menu après que les plats soient prêts
    cookChief->updateStock();
}
