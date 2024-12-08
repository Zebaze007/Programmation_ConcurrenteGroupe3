#include "commandcontroller.h"

CommandController::CommandController() {}

CommandController::~CommandController() {
    for (Command *command : commands) {
        delete command;
    }
    commands.clear();
}

void CommandController::addCommand(Command *command) {
    commands.append(command);
}

void CommandController::removeCommand(int id) {
    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i]->getId() == id) {
            delete commands[i];
            commands.removeAt(i);
            break;
        }
    }
}

Command* CommandController::findCommandById(int id) const {
    for (Command *command : commands) {
        if (command->getId() == id) {
            return command;
        }
    }
    return nullptr;
}

QVector<Command*> CommandController::getAllCommands() const {
    return commands;
}

QString CommandController::displayAllCommands() const {
    QString allCommands;
    for (Command *command : commands) {
        allCommands += command->displayCommandDetails() + "\n";
    }
    return allCommands;
}
