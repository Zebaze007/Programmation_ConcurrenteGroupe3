#ifndef ROOMCLERK_H
#define ROOMCLERK_H

#include <QGraphicsPixmapItem>
#include <QObject>

class RoomClerk : public QObject {
    Q_OBJECT

public:
    RoomClerk(const QString &imagePath, int id, QObject *parent = nullptr);
    ~RoomClerk();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // ROOMCLERK_H
