#include "Walk.h"
#include <iostream>

Walk::Walk() {}

void Walk::moveToPosition(const std::string& position) {
    std::cout << "Walking to position: " << position << std::endl;
}

Walk::~Walk() {}
