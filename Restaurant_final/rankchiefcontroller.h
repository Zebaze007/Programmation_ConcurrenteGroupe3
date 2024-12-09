#ifndef RANKCHIEFCONTROLLER_H
#define RANKCHIEFCONTROLLER_H

#include <QVector>
#include "rankchief.h"

class RankChiefController {
public:
    void addRankChief(RankChief *rankChief);
    void moveRankChief(int rankChiefId, int x, int y, double scale = 100.0);
    RankChief* findRankChiefById(int rankChiefId);

private:
    QVector<RankChief*> rankChiefs; // Liste des Rank Chiefs gérés
};

#endif // RANKCHIEFCONTROLLER_H
