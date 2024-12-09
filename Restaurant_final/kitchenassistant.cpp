#include "kitchenassistant.h"

KitchenAssistant::KitchenAssistant(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : définit l'ordre de superposition
}

KitchenAssistant::~KitchenAssistant()
{
    delete graphicsItem;
}

void KitchenAssistant::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* KitchenAssistant::getGraphicsItem() const
{
    return graphicsItem;
}

int KitchenAssistant::getId() const
{
    return id;
}
