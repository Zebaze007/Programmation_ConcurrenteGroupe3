#ifndef ROOMCLERKCONTROLLER_H
#define ROOMCLERKCONTROLLER_H

#include <QVector>
#include "roomclerk.h"

class RoomClerkController {
public:
    RoomClerkController();
    ~RoomClerkController();

    void addRoomClerk(RoomClerk *clerk);           // Ajouter un réceptionniste
    void moveRoomClerk(int clerkId, int x, int y, double scale = 100.0); // Déplacer un réceptionniste
    RoomClerk* findRoomClerkById(int clerkId);     // Trouver un réceptionniste par son ID
    QVector<RoomClerk*> getRoomClerks() const;     // Obtenir tous les réceptionnistes

private:
    QVector<RoomClerk*> clerks; // Liste des réceptionnistes
};

#endif // ROOMCLERKCONTROLLER_H
