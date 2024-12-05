#ifndef COMMANDCONTROLLER_H
#define COMMANDCONTROLLER_H

#include "Command.h"
#include <vector>

class CommandController {
private:
    std::vector<Command> commands; // Liste des commandes

public:
    CommandController();
    ~CommandController();

    void addCommand(Command command);  // Ajouter une nouvelle commande
    void executeCommand(int commandId); // Exécuter une commande par ID
    void updateCommandStatus(int commandId, bool status); // Met à jour le statut
};

#endif // COMMANDCONTROLLER_H
