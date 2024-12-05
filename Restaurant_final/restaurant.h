#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <vector>
#include "Staff.h"
#include "ClientGroup.h"

class Restaurant {
private:
    std::vector<Staff*> staffList;
    std::vector<ClientGroup*> clientGroups;

public:
    Restaurant();
    void addStaff(Staff* staff);
    void removeStaff(Staff* staff);
    void addClientGroup(ClientGroup* group);
    void removeClientGroup(ClientGroup* group);

    void open();
    void close();

    ~Restaurant();
};

#endif // RESTAURANT_H
