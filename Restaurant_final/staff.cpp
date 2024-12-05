#include "Staff.h"

Staff::Staff(const std::string& name, const std::string& rank, bool isAvailable)
    : name(name), rank(rank), isAvailable(isAvailable) {}

void Staff::move(Position newPosition) {
    position = newPosition;
}

void Staff::serve(ClientGroup* clients) {
    // Implémente la logique pour servir un groupe de clients.
}

Staff::~Staff() {
    // Libération des ressources si nécessaire.
}
