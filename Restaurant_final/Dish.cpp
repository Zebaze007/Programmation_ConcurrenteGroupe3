#include "dish.h"

Dish::Dish(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : permet de gérer la superposition
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
