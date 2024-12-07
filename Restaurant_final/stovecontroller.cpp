#include "stovecontroller.h"


StoveController::StoveController(QObject *parent)
    : QObject(parent)
{
}

StoveController::~StoveController()
{
    // Libérer la mémoire de tous les fours
    for (Stove *stove : stoves) {
        delete stove;
    }
    stoves.clear();
}

void StoveController::addFour(Stove *stove)
{
    if (stove) {
        stoves.append(stove); // Ajouter le four à la liste
    }
}

void StoveController::moveFour(int id, int x, int y, double scale)
{
    // Rechercher le four par ID
    for (Stove *stove : stoves) {
        if (stove->getId() == id) {
            stove->setPosition(x, y, scale); // Déplacer le four
            break;
        }
    }
}

Stove* StoveController::findFourById(int id)
{
    // Rechercher et retourner le four correspondant à l'ID
    for (Stove *four : stoves) {
        if (four->getId() == id) {
            return four;
        }
    }
    return nullptr; // Aucun four trouvé
}
