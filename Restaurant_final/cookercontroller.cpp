#include "cookercontroller.h"

#include <iostream>

void CookerController::prepareStep() {
    std::cout << "Cooker is preparing a step of the recipe..." << std::endl;
}

void CookerController::depositCommand(Command* command) {
    std::cout << "Cooker is depositing a completed command." << std::endl;
}

void CookerController::takeIngredient() {
    std::cout << "Cooker is taking an ingredient." << std::endl;
}

void CookerController::run() {
    std::cout << "Cooker is running the recipe process." << std::endl;
}
