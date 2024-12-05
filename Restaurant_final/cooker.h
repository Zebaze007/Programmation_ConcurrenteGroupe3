#ifndef COOKER_H
#define COOKER_H

#include "Command.h"

class Cooker {
public:
    void prepareStep();
    void depositCommand(Command* command);
    void takeIngredient();
    void run();
};

#endif // COOKER_H
