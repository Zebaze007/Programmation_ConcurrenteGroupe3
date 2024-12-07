#ifndef WASHER_H
#define WASHER_H

#include "dishwasher.h"
#include "washingmachine.h"


class Washer :  public QObject  {
public:
    void fillDishwasher();
    void emptyDishwasher();
    void fillWashingMachine();
    void emptyWashingMachine();

public:
    Washer(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Washer();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // WASHER_H
