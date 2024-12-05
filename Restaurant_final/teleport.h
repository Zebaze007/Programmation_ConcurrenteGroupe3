#ifndef TELEPORT_H
#define TELEPORT_H

#include "IMove.h"

class Teleport : public IMove {
public:
    Teleport();
    void moveToPosition(const std::string& position) override;
    ~Teleport();
};

#endif // TELEPORT_H
