#include "cookchiefcontroller.h"

#include <iostream>

void CookChiefController::giveTasks() {
    std::cout << "CookChief is assigning tasks to cookers." << std::endl;
}

void CookChiefController::divideTasks(const std::string& task) {
    std::cout << "CookChief is dividing task: " << task << std::endl;
}

void CookChiefController::updateStock() {
    std::cout << "CookChief is updating the stock." << std::endl;
}

void CookChiefController::createStock() {
    std::cout << "CookChief is creating new stock." << std::endl;
}
