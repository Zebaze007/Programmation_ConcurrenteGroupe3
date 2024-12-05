#ifndef WALK_H
#define WALK_H

#include "IMove.h"

class Walk : public IMove {
public:
    Walk();
    void moveToPosition(const std::string& position) override;
    ~Walk();
};

#endif // WALK_H
