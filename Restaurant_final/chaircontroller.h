#ifndef CHAIRCONTROLLER_H
#define CHAIRCONTROLLER_H

#include <QVector>
#include "chair.h"

class ChairController {
public:
    ChairController();

    void addChair(Chair *chair);                        // Ajouter une chaise
    void moveChair(int chairId, int x, int y, double scale = 100.0); // Déplacer une chaise par ID
    Chair *findChairById(int chairId);                  // Trouver une chaise par ID
    void removeChair(int chairId);                      // Supprimer une chaise par ID
    const QVector<Chair*>& getAllChairs() const;        // Obtenir toutes les chaises

private:
    QVector<Chair*> chairs; // Liste des chaises
};

#endif // CHAIRCONTROLLER_H
