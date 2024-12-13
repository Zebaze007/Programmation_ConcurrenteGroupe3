#ifndef CLIENT_H
#define CLIENT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include "command.h"

class Client : public QObject {
    Q_OBJECT

public:
    // Constructeur normal avec paramètres
    Client(const QString &imagePath, int id, QObject *parent = nullptr);

    // Constructeur par défaut pour les tests
    Client(QObject *parent = nullptr);

    ~Client();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

    void setCommand(Command *command); // Associer une commande au client
    Command* getCommand() const; // Récupérer la commande du client

    void showOrderPopup(const QString &message, QGraphicsScene *scene);

    QString getImagePath() const; // Getter pour le chemin d'accès de l'image
    void setImagePath(const QString &path); // Setter pour changer l'image du client

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
    QGraphicsTextItem *orderPopup;
    QString imagePath;
    QPointF initialPosition; // Position initiale du client
    Command *currentCommand; // Commande associée au client
};

#endif // CLIENT_H
