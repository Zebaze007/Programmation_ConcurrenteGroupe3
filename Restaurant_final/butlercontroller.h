#ifndef BUTLERCONTROLLER_H
#define BUTLERCONTROLLER_H

#include <QVector>
#include "butler.h"

class ButlerController {
public:
    void addButler(Butler *butler);
    void moveButler(int butlerId, int x, int y, double scale = 100.0);
    Butler* findButlerById(int butlerId);

private:
    QVector<Butler*> butlers; // Liste des majordomes dans la scène
};

#endif // BUTLERCONTROLLER_H
