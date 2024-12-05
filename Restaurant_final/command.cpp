#include "Command.h"

Command::Command(int id, const std::vector<Dish*>& dishes, bool ready)
    : id(id), dishes(dishes), ready(ready) {}

int Command::getId() const {
    return id;
}

void Command::setId(int value) {
    id = value;
}

const std::vector<Dish*>& Command::getDishes() const {
    return dishes;
}

void Command::setDishes(const std::vector<Dish*>& value) {
    dishes = value;
}

bool Command::isReady() const {
    return ready;
}

void Command::setReady(bool value) {
    ready = value;
}
