#ifndef CLIENT_H
#define CLIENT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsTextItem>

class Client : public QObject {
    Q_OBJECT

public:
    Client(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Client();

    void setPosition(int x, int y, double scale);
    void orderDish(const QString &dish);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;
    void showOrderPopup(const QString &message, QGraphicsScene *scene);
    QString getImagePath() const; // Getter pour le chemin d'accès de l'image
    void setImagePath(const QString &path); // Setter pour changer l'image du client

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
    QGraphicsTextItem *orderPopup;
    QString imagePath;
};

#endif // CLIENT_H
