#include "client.h"
#include <QGraphicsTextItem>
#include <QPropertyAnimation>
#include <QFont>

Client::Client(const QString &imagePath, int id, QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem(QPixmap(imagePath))), id(id), orderPopup(nullptr), imagePath(imagePath), currentCommand(nullptr)
{
    graphicsItem->setZValue(1);
}

// Constructeur par défaut pour les tests unitaires
Client::Client(QObject *parent)
    : QObject(parent), graphicsItem(new QGraphicsPixmapItem()), id(0), orderPopup(nullptr), imagePath(""), currentCommand(nullptr)
{
    graphicsItem->setZValue(1);
}

Client::~Client()
{
    delete graphicsItem;
    if (orderPopup) {
        delete orderPopup;
    }
    if (currentCommand) {
        delete currentCommand;
    }
}

void Client::setPosition(int x, int y, double scale)
{
    if (graphicsItem) {
        graphicsItem->setPos(x, y);
        graphicsItem->setScale(scale / 100.0);
    }
}

QGraphicsPixmapItem* Client::getGraphicsItem() const
{
    return graphicsItem;
}

int Client::getId() const
{
    return id;
}

void Client::setCommand(Command *command)
{
    if (currentCommand) {
        delete currentCommand; // Supprimer l'ancienne commande, s'il y en a une
    }
    currentCommand = command;
}

Command* Client::getCommand() const
{
    return currentCommand;
}

void Client::showOrderPopup(const QString &message, QGraphicsScene *scene)
{
    if (orderPopup) {
        scene->removeItem(orderPopup);
        delete orderPopup;
    }

    orderPopup = new QGraphicsTextItem(message);
    orderPopup->setFont(QFont("Arial", 12));
    orderPopup->setPos(graphicsItem->pos().x(), graphicsItem->pos().y() - 30);
    orderPopup->setZValue(2);
    scene->addItem(orderPopup);
}

QString Client::getImagePath() const
{
    return imagePath;
}

void Client::setImagePath(const QString &path)
{
    imagePath = path;
    QPixmap pixmap(path);
    if (!pixmap.isNull() && graphicsItem) {
        graphicsItem->setPixmap(pixmap);
    }
}
