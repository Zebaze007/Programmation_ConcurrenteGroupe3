#include "Configurator.h"

Configurator::Configurator() : openHour(8), closeHour(22), tableCount(10), maxClientCapacity(100) {}

void Configurator::setOpenHour(int hour) {
    openHour = hour;
}

void Configurator::setCloseHour(int hour) {
    closeHour = hour;
}

void Configurator::setTableCount(int count) {
    tableCount = count;
}

void Configurator::setMaxClientCapacity(int capacity) {
    maxClientCapacity = capacity;
}

int Configurator::getOpenHour() const {
    return openHour;
}

int Configurator::getCloseHour() const {
    return closeHour;
}

int Configurator::getTableCount() const {
    return tableCount;
}

int Configurator::getMaxClientCapacity() const {
    return maxClientCapacity;
}

Configurator::~Configurator() {
    // Libération des ressources si nécessaire.
}
