#ifndef COOKERCONTROLLER_H
#define COOKERCONTROLLER_H

#include "commandcontroller.h"
#include "cooker.h"
#include <QString>

class CookerController {
public:
    CookerController(CommandController *commandController);
    ~CookerController();

    QString prepareDish(int commandId, int menuId);
    QString listDishesInCommand(int commandId) const;

private:
    CommandController *commandController; // Référence au gestionnaire des commandes
};

#endif // COOKERCONTROLLER_H
