#ifndef COOKCHIEF_H
#define COOKCHIEF_H

#include <string>
#include "Menu.h"
#include "countercontroller.h"

class CookChief {
private:
    Menu menu;
    Counter* dishCounter;

public:
    void giveTasks();
    void divideTasks(const std::string& task);
    void updateStock();
    void createStock();
};

#endif // COOKCHIEF_H
