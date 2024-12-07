#ifndef CHAIR_H
#define CHAIR_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Chair : public QObject {
    Q_OBJECT

public:
    Chair(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Chair();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // CHAIR_H
