#ifndef COUNTERCONTROLLER_H
#define COUNTERCONTROLLER_H

#include "commandcontroller.h"
#include "Counter.h"
#include <QString>

class CounterController {
public:
    CounterController(CommandController *commandController);
    ~CounterController();

    QString processCommand(int commandId);
    QString listPendingCommands() const;

private:
    CommandController *commandController; // Référence au gestionnaire des commandes
};

#endif // COUNTERCONTROLLER_H
