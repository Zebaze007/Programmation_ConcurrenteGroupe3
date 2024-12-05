#include "Cooker.h"
#include <iostream>

void Cooker::prepareStep() {
    std::cout << "Cooker is preparing a step of the recipe..." << std::endl;
}

void Cooker::depositCommand(Command* command) {
    std::cout << "Cooker is depositing a completed command." << std::endl;
}

void Cooker::takeIngredient() {
    std::cout << "Cooker is taking an ingredient." << std::endl;
}

void Cooker::run() {
    std::cout << "Cooker is running the recipe process." << std::endl;
}
