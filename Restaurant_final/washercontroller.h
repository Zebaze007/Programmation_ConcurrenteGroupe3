#ifndef WASHER_H
#define WASHER_H

#include "Dishwasher.h"
#include "WashingMachineController.h"
#include "WasherController.h"

class Washer {
public:
    void fillDishwasher();
    void emptyDishwasher();
    void fillWashingMachine();
    void emptyWashingMachine();
};

#endif // WASHER_H
