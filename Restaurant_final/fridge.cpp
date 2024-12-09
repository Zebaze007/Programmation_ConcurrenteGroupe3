#include "fridge.h"
#include <QPixmap>

Fridge::Fridge(const QString &imagePath, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath)))
{
    graphicsItem->setZValue(1); // Mettre le frigo au-dessus des éléments de base
}

Fridge::~Fridge() {
    delete graphicsItem;
}

void Fridge::setPosition(int x, int y, double scale) {
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Fridge::getGraphicsItem() const {
    return graphicsItem;
}

void Fridge::addIngredient(const QString &ingredient, int quantity) {
    if (quantity > 0) {
        ingredients[ingredient] += quantity;
    }
}

bool Fridge::removeIngredient(const QString &ingredient, int quantity) {
    if (ingredients.contains(ingredient) && ingredients[ingredient] >= quantity) {
        ingredients[ingredient] -= quantity;
        if (ingredients[ingredient] == 0) {
            ingredients.remove(ingredient);
        }
        return true;
    }
    return false;
}

int Fridge::getIngredientQuantity(const QString &ingredient) const {
    return ingredients.value(ingredient, 0);
}

QString Fridge::listAllIngredients() const {
    QString result = "Ingredients in the fridge:\n";
    for (auto it = ingredients.begin(); it != ingredients.end(); ++it) {
        result += QString("%1: %2\n").arg(it.key()).arg(it.value());
    }
    return result;
}
