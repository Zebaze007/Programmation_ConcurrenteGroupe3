#include "rankchief.h"

RankChief::RankChief(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(2); // Z-value pour gérer les superpositions
}

RankChief::~RankChief()
{
    delete graphicsItem;
}

void RankChief::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* RankChief::getGraphicsItem() const
{
    return graphicsItem;
}

int RankChief::getId() const
{
    return id;
}
