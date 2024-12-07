#include "roomclerkcontroller.h"

RoomClerkController::RoomClerkController() {}

RoomClerkController::~RoomClerkController() {
    for (RoomClerk *clerk : clerks) {
        delete clerk;
    }
}

void RoomClerkController::addRoomClerk(RoomClerk *clerk) {
    clerks.append(clerk);
}

void RoomClerkController::moveRoomClerk(int clerkId, int x, int y, double scale) {
    for (RoomClerk *clerk : clerks) {
        if (clerk->getId() == clerkId) {
            clerk->setPosition(x, y, scale);
            break;
        }
    }
}

RoomClerk* RoomClerkController::findRoomClerkById(int clerkId) {
    for (RoomClerk *clerk : clerks) {
        if (clerk->getId() == clerkId) {
            return clerk;
        }
    }
    return nullptr;
}

QVector<RoomClerk*> RoomClerkController::getRoomClerks() const {
    return clerks;
}
