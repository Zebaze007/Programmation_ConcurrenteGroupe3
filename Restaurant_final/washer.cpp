#include "washer.h"

#include <iostream>

void Washer::fillDishwasher() {
    std::cout << "Filling the dishwasher..." << std::endl;
}

void Washer::emptyDishwasher() {
    std::cout << "Emptying the dishwasher..." << std::endl;
}

void Washer::fillWashingMachine() {
    std::cout << "Filling the washing machine..." << std::endl;
}

void Washer::emptyWashingMachine() {
    std::cout << "Emptying the washing machine..." << std::endl;
}

Washer::Washer(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id)
{
    graphicsItem->setZValue(1); // Permet de gérer la superposition
}

Washer::~Washer()
{
    delete graphicsItem;
}

void Washer::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Washer::getGraphicsItem() const
{
    return graphicsItem;
}

int Washer::getId() const
{
    return id;
}
