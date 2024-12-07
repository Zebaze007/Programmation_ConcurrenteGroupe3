#ifndef COOKERCONTROLLER_H
#define COOKERCONTROLLER_H

#include "Command.h"
#include "cooker.h"

class CookerController {
public:
    void prepareStep();
    void depositCommand(Command* command);
    void takeIngredient();
    void run();
};

#endif // COOKERCONTROLLER_H
