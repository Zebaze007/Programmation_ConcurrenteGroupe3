#ifndef COOKCHIEFCONTROLLER_H
#define COOKCHIEFCONTROLLER_H

#include <string>
#include "Menu.h"
#include "countercontroller.h"
#include "cookchief.h"

    class CookChiefController {
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
