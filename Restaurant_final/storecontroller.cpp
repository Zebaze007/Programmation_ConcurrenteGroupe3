#include "storecontroller.h"

StoreController::StoreController(QGraphicsScene *scene)
    : scene(scene) {}

StoreController::~StoreController() {
    for (Store *store : stores) {
        delete store;
    }
}

void StoreController::addStore(Store *store, int x, int y, double scale) {
    if (store && scene) {
        store->setPosition(x, y, scale);
        scene->addItem(store->getGraphicsItem());
        stores.append(store);
    }
}
