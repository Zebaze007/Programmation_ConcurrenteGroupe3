#ifndef STAFF_H
#define STAFF_H

#include <string>
#include "ClientGroup.h"
#include "Position.h"

class Staff {
protected:
    std::string name;
    std::string rank;
    bool isAvailable;
    Position position;

public:
    Staff(const std::string& name, const std::string& rank, bool isAvailable);
    virtual void move(Position newPosition);
    virtual void serve(ClientGroup* clients);
    virtual ~Staff();
};

#endif // STAFF_H
