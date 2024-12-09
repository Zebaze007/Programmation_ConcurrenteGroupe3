#include "fridgecontroller.h"

FridgeController::FridgeController(QGraphicsScene *scene)
    : scene(scene) {}

FridgeController::~FridgeController() {
    for (Fridge *fridge : fridges) {
        delete fridge;
    }
}

void FridgeController::addFridge(Fridge *fridge, int x, int y, double scale) {
    if (fridge && scene) {
        fridge->setPosition(x, y, scale);
        scene->addItem(fridge->getGraphicsItem());
        fridges.append(fridge);
    }
}

QString FridgeController::addIngredientToFridge(int fridgeIndex, const QString &ingredient, int quantity) {
    if (fridgeIndex >= 0 && fridgeIndex < fridges.size()) {
        fridges[fridgeIndex]->addIngredient(ingredient, quantity);
        return QString("Added %1 x %2 to fridge %3.").arg(quantity).arg(ingredient).arg(fridgeIndex);
    }
    return QString("Fridge index %1 out of range.").arg(fridgeIndex);
}

QString FridgeController::removeIngredientFromFridge(int fridgeIndex, const QString &ingredient, int quantity) {
    if (fridgeIndex >= 0 && fridgeIndex < fridges.size()) {
        if (fridges[fridgeIndex]->removeIngredient(ingredient, quantity)) {
            return QString("Removed %1 x %2 from fridge %3.").arg(quantity).arg(ingredient).arg(fridgeIndex);
        }
        return QString("Not enough %1 in fridge %2 or ingredient not found.").arg(ingredient).arg(fridgeIndex);
    }
    return QString("Fridge index %1 out of range.").arg(fridgeIndex);
}

QString FridgeController::listIngredientsInFridge(int fridgeIndex) const {
    if (fridgeIndex >= 0 && fridgeIndex < fridges.size()) {
        return fridges[fridgeIndex]->listAllIngredients();
    }
    return QString("Fridge index %1 out of range.").arg(fridgeIndex);
}
