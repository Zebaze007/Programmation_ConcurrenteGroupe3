#include "stove.h"


Stove::Stove(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // ZValue permet de gérer la superposition des objets
}

Stove::~Stove()
{
    delete graphicsItem;
}

void Stove::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Stove::getGraphicsItem() const
{
    return graphicsItem;
}

int Stove::getId() const
{
    return id;
}

