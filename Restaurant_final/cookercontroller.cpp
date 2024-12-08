#include "cookercontroller.h"

CookerController::CookerController(CommandController *commandController)
    : commandController(commandController) {}

CookerController::~CookerController() {}

QString CookerController::prepareDish(int commandId, int menuId) {
    // Récupérer la commande
    Command *command = commandController->findCommandById(commandId);

    if (!command) {
        return QString("Command ID %1 not found!").arg(commandId);
    }


    return QString("Dish ID %1 not found in Command ID %2.").arg(menuId).arg(commandId);
}

QString CookerController::listDishesInCommand(int commandId) const {
    // Récupérer la commande
    Command *command = commandController->findCommandById(commandId);

    if (!command) {
        return QString("Command ID %1 not found!").arg(commandId);
    }


}
