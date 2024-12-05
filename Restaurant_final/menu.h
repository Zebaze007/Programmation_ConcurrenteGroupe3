#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

class Dish;

class Menu {
private:
    std::vector<Dish*> dishes;

public:
    void disableDish(Dish* dish);
    void buildMenu();
    void enableDish(Dish* dish);
};

#endif // MENU_H
