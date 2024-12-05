#include "CookChiefController.h"
#include <iostream>

void CookChief::giveTasks() {
    std::cout << "CookChief is assigning tasks to cookers." << std::endl;
}

void CookChief::divideTasks(const std::string& task) {
    std::cout << "CookChief is dividing task: " << task << std::endl;
}

void CookChief::updateStock() {
    std::cout << "CookChief is updating the stock." << std::endl;
}

void CookChief::createStock() {
    std::cout << "CookChief is creating new stock." << std::endl;
}
