#include "butler.h"

Butler::Butler(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Superposition par rapport aux autres objets
}

Butler::~Butler()
{
    delete graphicsItem;
}

void Butler::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Butler::getGraphicsItem() const
{
    return graphicsItem;
}

int Butler::getId() const
{
    return id;
}
