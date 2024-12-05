#ifndef FACTORYSTAFF_H
#define FACTORYSTAFF_H

#include "Staff.h"

class FactoryStaff {
public:
    FactoryStaff();
    Staff* createStaff(const std::string& name, const std::string& rank, bool isAvailable);
    ~FactoryStaff();
};

#endif // FACTORYSTAFF_H
