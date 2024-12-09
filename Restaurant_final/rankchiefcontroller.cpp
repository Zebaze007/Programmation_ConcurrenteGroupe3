#include "rankchiefcontroller.h"

void RankChiefController::addRankChief(RankChief *rankChief)
{
    rankChiefs.append(rankChief);
}

void RankChiefController::moveRankChief(int rankChiefId, int x, int y, double scale)
{
    for (RankChief *rankChief : rankChiefs) {
        if (rankChief->getId() == rankChiefId) {
            rankChief->setPosition(x, y, scale);
            break;
        }
    }
}

RankChief* RankChiefController::findRankChiefById(int rankChiefId)
{
    for (RankChief *rankChief : rankChiefs) {
        if (rankChief->getId() == rankChiefId) {
            return rankChief;
        }
    }
    return nullptr;
}
