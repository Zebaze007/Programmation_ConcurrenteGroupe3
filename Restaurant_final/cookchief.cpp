#include "cookchief.h"

CookChief::CookChief(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Permet de superposer correctement
}

CookChief::~CookChief()
{
    delete graphicsItem;
}

void CookChief::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* CookChief::getGraphicsItem() const
{
    return graphicsItem;
}

int CookChief::getId() const
{
    return id;
}
