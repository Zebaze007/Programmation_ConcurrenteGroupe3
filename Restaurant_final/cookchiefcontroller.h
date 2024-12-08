#ifndef COOKCHIEFCONTROLLER_H
#define COOKCHIEFCONTROLLER_H

#include "menucontroller.h"
#include "countercontroller.h"
#include <QString>

class CookChiefController {
public:
    CookChiefController(MenuController *menuController, CounterController *counterController);
    ~CookChiefController();

    QString prepareCommand(int commandId);
    QString listAvailableDishes() const;

private:
    MenuController *menuController;         // Gestionnaire des plats
    CounterController *counterController;   // Gestionnaire des commandes
};

#endif // COOKCHIEFCONTROLLER_H
