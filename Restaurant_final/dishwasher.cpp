#include "dishwasher.h"

Dishwasher::Dishwasher(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : Gère l'ordre des couches dans la scène
}

Dishwasher::~Dishwasher()
{
    delete graphicsItem;
}

void Dishwasher::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Dishwasher::getGraphicsItem() const
{
    return graphicsItem;
}

int Dishwasher::getId() const
{
    return id;
}
