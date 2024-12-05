#include "washingmachine.h"

WashingMachine::WashingMachine(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : superposition des sprites
}

WashingMachine::~WashingMachine()
{
    delete graphicsItem;
}

void WashingMachine::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* WashingMachine::getGraphicsItem() const
{
    return graphicsItem;
}

int WashingMachine::getId() const
{
    return id;
}
