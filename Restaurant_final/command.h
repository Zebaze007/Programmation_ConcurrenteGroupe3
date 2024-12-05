#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include "Dish.h"

class Command {
private:
    int id;
    std::vector<Dish*> dishes;
    bool ready;

public:
    Command(int id, const std::vector<Dish*>& dishes, bool ready);

    // Getters et Setters
    int getId() const;
    void setId(int value);
    const std::vector<Dish*>& getDishes() const;
    void setDishes(const std::vector<Dish*>& value);
    bool isReady() const;
    void setReady(bool value);
};

#endif // COMMAND_H
