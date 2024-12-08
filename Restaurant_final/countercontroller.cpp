#include "countercontroller.h"

CounterController::CounterController(CommandController *commandController)
    : commandController(commandController) {}

CounterController::~CounterController() {}

QString CounterController::processCommand(int commandId) {
    Command *command = commandController->findCommandById(commandId);

    if (!command) {
        return QString("Command ID %1 not found!").arg(commandId);
    }

    // Exemple de traitement (vous pouvez personnaliser cette logique)
    QString result = QString("Processing Command ID %1:\n").arg(commandId);
    result += command->displayCommandDetails();
    result += "Command has been processed.\n";

    // Optionnel : supprimer la commande après traitement
    commandController->removeCommand(commandId);

    return result;
}

QString CounterController::listPendingCommands() const {
    return commandController->displayAllCommands();
}
