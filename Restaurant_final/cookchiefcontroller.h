#ifndef COOKCHIEFCONTROLLER_H
#define COOKCHIEFCONTROLLER_H

#include "CookChief.h"
#include "Command.h"
#include "Counter.h"
#include "ManageTools.h"

class CookChiefController {
private:
    CookChief* cookChief;
    Counter* counter;
    ManageTools* toolManager;

public:
    CookChiefController(CookChief* cookChief, Counter* counter, ManageTools* toolManager);
    ~CookChiefController();

    void listenForCommands(); // Écoute les nouvelles commandes
    void assignTasks();       // Attribue les tâches aux cuisiniers
    void updateMenu();        // Met à jour l'état des plats dans le menu
};

#endif // COOKCHIEFCONTROLLER_H
