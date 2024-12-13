#include "dish.h"

Dish::Dish(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : permet de gérer la superposition
}

// Constructeur par défaut pour les tests unitaires
Dish::Dish(QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem()), id(0) // Valeurs par défaut
{
    graphicsItem->setZValue(1);
}

Dish::~Dish()
{
    delete graphicsItem;
}

void Dish::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Dish::getGraphicsItem() const
{
    return graphicsItem;
}

int Dish::getId() const
{
    return id;
}
