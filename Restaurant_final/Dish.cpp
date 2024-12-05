#include "Dish.h"

Dish::Dish(const std::string& name, int idRecipe, bool ready)
    : name(name), idRecipe(idRecipe), ready(ready) {}

std::string Dish::getName() const {
    return name;
}

void Dish::setName(const std::string& value) {
    name = value;
}

int Dish::getIdRecipe() const {
    return idRecipe;
}

void Dish::setIdRecipe(int value) {
    idRecipe = value;
}

bool Dish::isReady() const {
    return ready;
}

void Dish::setReady(bool value) {
    ready = value;
}
