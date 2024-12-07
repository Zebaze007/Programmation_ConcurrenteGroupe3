#include "server.h"

Server::Server(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Optionnel : Superposition
}

Server::~Server()
{
    delete graphicsItem;
}

void Server::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Server::getGraphicsItem() const
{
    return graphicsItem;
}

int Server::getId() const
{
    return id;
}
