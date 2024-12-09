#include "store.h"

Store::Store(const QString &imagePath, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath)))
{
    graphicsItem->setZValue(1);
}

Store::~Store() {
    delete graphicsItem;
}

void Store::setPosition(int x, int y, double scale) {
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Store::getGraphicsItem() const {
    return graphicsItem;
}
