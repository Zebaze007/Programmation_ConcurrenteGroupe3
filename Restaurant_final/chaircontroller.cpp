#include "chaircontroller.h"

ChairController::ChairController() {}

void ChairController::addChair(Chair *chair)
{
    chairs.append(chair);
}

void ChairController::moveChair(int chairId, int x, int y, double scale)
{
    for (Chair *chair : chairs) {
        if (chair->getId() == chairId) {
            chair->setPosition(x, y, scale);
            break;
        }
    }
}

Chair *ChairController::findChairById(int chairId)
{
    for (Chair *chair : chairs) {
        if (chair->getId() == chairId) {
            return chair;
        }
    }
    return nullptr; // Si aucune chaise ne correspond à l'ID
}

void ChairController::removeChair(int chairId)
{
    for (int i = 0; i < chairs.size(); ++i) {
        if (chairs[i]->getId() == chairId) {
            delete chairs[i];    // Libérez la mémoire
            chairs.remove(i);    // Supprimez de la liste
            break;
        }
    }
}

const QVector<Chair*>& ChairController::getAllChairs() const
{
    return chairs;
}
