#include "Restaurant.h"

Restaurant::Restaurant() {}

void Restaurant::addStaff(Staff* staff) {
    staffList.push_back(staff);
}

void Restaurant::removeStaff(Staff* staff) {
    staffList.erase(std::remove(staffList.begin(), staffList.end(), staff), staffList.end());
}

void Restaurant::addClientGroup(ClientGroup* group) {
    clientGroups.push_back(group);
}

void Restaurant::removeClientGroup(ClientGroup* group) {
    clientGroups.erase(std::remove(clientGroups.begin(), clientGroups.end(), group), clientGroups.end());
}

void Restaurant::open() {
    // Logique pour ouvrir le restaurant.
}

void Restaurant::close() {
    // Logique pour fermer le restaurant.
}

Restaurant::~Restaurant() {
    for (Staff* staff : staffList) {
        delete staff;
    }
    for (ClientGroup* group : clientGroups) {
        delete group;
    }
}
