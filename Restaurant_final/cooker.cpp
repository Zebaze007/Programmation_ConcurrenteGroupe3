#include "cooker.h"

Cooker::Cooker(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Permet de gérer la superposition des sprites
}

// Constructeur par défaut pour les tests unitaires
Cooker::Cooker(QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem()), id(0) // Valeurs par défaut
{
    graphicsItem->setZValue(1);
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
