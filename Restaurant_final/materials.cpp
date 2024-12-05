#include "Materials.h"

int Materials::getDirtyMaterial() const {
    return dirtyMaterial;
}

void Materials::setDirtyMaterial(int value) {
    dirtyMaterial = value;
}

int Materials::getCleanMaterial() const {
    return cleanMaterial;
}

void Materials::setCleanMaterial(int value) {
    cleanMaterial = value;
}
