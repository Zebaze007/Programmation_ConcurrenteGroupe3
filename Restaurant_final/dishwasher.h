#ifndef DISHWASHER_H
#define DISHWASHER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Dishwasher : public QObject {
    Q_OBJECT

public:
    Dishwasher(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Dishwasher();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // DISHWASHER_H
