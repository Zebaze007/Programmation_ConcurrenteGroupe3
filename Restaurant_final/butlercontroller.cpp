#include "butlercontroller.h"

void ButlerController::addButler(Butler *butler)
{
    butlers.append(butler);
}

void ButlerController::moveButler(int butlerId, int x, int y, double scale)
{
    for (Butler *butler : butlers) {
        if (butler->getId() == butlerId) {
            butler->setPosition(x, y, scale);
            break;
        }
    }
}

Butler* ButlerController::findButlerById(int butlerId)
{
    for (Butler *butler : butlers) {
        if (butler->getId() == butlerId) {
            return butler;
        }
    }
    return nullptr;
}
