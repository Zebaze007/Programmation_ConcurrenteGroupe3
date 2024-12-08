#include "cookchiefcontroller.h"

CookChiefController::CookChiefController(MenuController *menuController, CounterController *counterController)
    : menuController(menuController), counterController(counterController) {}

CookChiefController::~CookChiefController() {}

QString CookChiefController::prepareCommand(int commandId) {
    // Récupérer les informations sur la commande
    QString commandDetails = counterController->processCommand(commandId);

    if (commandDetails.startsWith("Command ID")) { // La commande a été trouvée
        return QString("Chef is preparing:\n") + commandDetails;
    }

    return QString("Command ID %1 could not be prepared.").arg(commandId);
}

