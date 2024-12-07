#ifndef STOVECONTROLLER_H
#define STOVECONTROLLER_H

#include "stove.h"

class StoveController : public QObject {
    Q_OBJECT

public:
    explicit StoveController(QObject *parent = nullptr);
    ~StoveController();

    void addFour(Stove *stove);                         // Ajouter un four
    void moveFour(int id, int x, int y, double scale = 100.0); // Déplacer un four
    Stove* findFourById(int id);                       // Trouver un four par ID

private:
    QVector<Stove*> stoves; // Liste des fours
};

#endif // FOURCONTROLLER_H
