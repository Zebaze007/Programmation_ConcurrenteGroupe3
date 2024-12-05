#include "CommandController.h"

CommandController::CommandController() {}

CommandController::~CommandController() {}

void CommandController::addCommand(Command command) {
    commands.push_back(command); // Ajouter la commande à la liste
}

void CommandController::executeCommand(int commandId) {
    for (auto& command : commands) {
        if (command.getId() == commandId) {
            command.setReady(true); // Marquer comme prête
            break;
        }
    }
}

void CommandController::updateCommandStatus(int commandId, bool status) {
    for (auto& command : commands) {
        if (command.getId() == commandId) {
            command.setReady(status); // Mettre à jour le statut
            break;
        }
    }
}
