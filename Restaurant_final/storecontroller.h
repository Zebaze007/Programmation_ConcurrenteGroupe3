#ifndef STORECONTROLLER_H
#define STORECONTROLLER_H

#include "store.h"
#include <QGraphicsScene>
#include <QVector>

class StoreController {
public:
    explicit StoreController(QGraphicsScene *scene);
    ~StoreController();

    void addStore(Store *store, int x, int y, double scale = 100.0);

private:
    QVector<Store*> stores;
    QGraphicsScene *scene;
};

#endif // STORECONTROLLER_H
