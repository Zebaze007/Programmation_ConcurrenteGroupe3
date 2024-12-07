#include "roomclerk.h"

RoomClerk::RoomClerk(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : priorité de superposition
}

RoomClerk::~RoomClerk()
{
    delete graphicsItem;
}

void RoomClerk::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* RoomClerk::getGraphicsItem() const
{
    return graphicsItem;
}

int RoomClerk::getId() const
{
    return id;
}
