#include "FactoryStaff.h"

FactoryStaff::FactoryStaff() {}

Staff* FactoryStaff::createStaff(const std::string& name, const std::string& rank, bool isAvailable) {
    return new Staff(name, rank, isAvailable);
}

FactoryStaff::~FactoryStaff() {
    // Libération des ressources si nécessaire.
}
