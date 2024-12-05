#ifndef COUNTER_H
#define COUNTER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Counter : public QObject {
    Q_OBJECT

public:
    Counter(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Counter();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // COUNTER_H
