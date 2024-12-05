#ifndef DISHWASHER_H
#define DISHWASHER_H

#include "Cleaner.h"
#include "dishwasher.h"

class DishwasherController : public Cleaner {
private:
    int dishwasherDish;

public:
    void washMaterial() override;
};

#endif // DISHWASHER_H
