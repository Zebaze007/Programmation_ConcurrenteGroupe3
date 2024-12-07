#ifndef DISHCONTROLLER_H
#define DISHCONTROLLER_H

#include <QVector>
#include "dish.h"

class DishController {
public:
    DishController();
    ~DishController();

    void addDish(Dish *dish);                       // Ajouter un plat
    Dish* findDishById(int id);                     // Trouver un plat par son ID
    void moveDish(int id, int x, int y, double scale = 100.0); // Déplacer un plat
    QVector<Dish*> getAllDishes() const;            // Obtenir tous les plats

private:
    QVector<Dish*> dishes; // Liste des plats
};

#endif // DISHCONTROLLER_H
