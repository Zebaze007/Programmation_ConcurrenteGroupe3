#include "counter.h"

Counter::Counter(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(2); // Optionnel : Z-value pour gérer la superposition
}

Counter::~Counter()
{
    delete graphicsItem;
}

void Counter::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Counter::getGraphicsItem() const
{
    return graphicsItem;
}

int Counter::getId() const
{
    return id;
}
