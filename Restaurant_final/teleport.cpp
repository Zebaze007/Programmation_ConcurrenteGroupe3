#include "Teleport.h"
#include <iostream>

Teleport::Teleport() {}

void Teleport::moveToPosition(const std::string& position) {
    std::cout << "Teleporting to position: " << position << std::endl;
}

Teleport::~Teleport() {}
