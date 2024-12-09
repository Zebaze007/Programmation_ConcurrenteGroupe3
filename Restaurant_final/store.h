#ifndef STORE_H
#define STORE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMap>

class Store : public QObject {
    Q_OBJECT

public:
    explicit Store(const QString &imagePath, QObject *parent = nullptr);
    ~Store();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;

private:
    QGraphicsPixmapItem *graphicsItem;
};

#endif // STORE_H
