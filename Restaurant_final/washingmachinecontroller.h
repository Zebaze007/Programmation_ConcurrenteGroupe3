#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "Cleaner.h"
#include "washingmachine.h"

class WashingMachineController : public Cleaner {
private:
    int washing;

public:
    void washMaterial() override;
};

#endif // WASHINGMACHINE_H
