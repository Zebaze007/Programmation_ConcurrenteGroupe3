#ifndef FRIDGECONTROLLER_H
#define FRIDGECONTROLLER_H

#include "fridge.h"
#include <QGraphicsScene>
#include <QVector>

class FridgeController {
public:
    explicit FridgeController(QGraphicsScene *scene);
    ~FridgeController();

    void addFridge(Fridge *fridge, int x, int y, double scale = 100.0);
    QString addIngredientToFridge(int fridgeIndex, const QString &ingredient, int quantity);
    QString removeIngredientFromFridge(int fridgeIndex, const QString &ingredient, int quantity);
    QString listIngredientsInFridge(int fridgeIndex) const;

private:
    QVector<Fridge*> fridges;        // Liste des réfrigérateurs
    QGraphicsScene *scene;           // Scène graphique où les frigos sont affichés
};

#endif // FRIDGECONTROLLER_H
