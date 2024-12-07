#include "chair.h"

Chair::Chair(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Définir une valeur de superposition
}

Chair::~Chair()
{
    delete graphicsItem;
}

void Chair::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Chair::getGraphicsItem() const
{
    return graphicsItem;
}

int Chair::getId() const
{
    return id;
}
