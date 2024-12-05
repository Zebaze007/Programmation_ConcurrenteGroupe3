#include "cooker.h"

Cooker::Cooker(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Permet de gérer la superposition des sprites
}

Cooker::~Cooker()
{
    delete graphicsItem;
}

void Cooker::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Cooker::getGraphicsItem() const
{
    return graphicsItem;
}

int Cooker::getId() const
{
    return id;
}
