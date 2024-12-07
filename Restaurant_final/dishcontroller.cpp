#include "dishcontroller.h"

DishController::DishController()
{
    // Constructeur vide
}

DishController::~DishController()
{
    // Supprimez tous les plats
    for (Dish *dish : dishes) {
        delete dish;
    }
    dishes.clear();
}

void DishController::addDish(Dish *dish)
{
    if (dish) {
        dishes.append(dish);
    }
}

Dish* DishController::findDishById(int id)
{
    for (Dish *dish : dishes) {
        if (dish->getId() == id) {
            return dish;
        }
    }
    return nullptr;
}

void DishController::moveDish(int id, int x, int y, double scale)
{
    Dish *dish = findDishById(id);
    if (dish) {
        dish->setPosition(x, y, scale);
    }
}

QVector<Dish*> DishController::getAllDishes() const
{
    return dishes;
}
