#include "ClientGroup.h"

ClientGroup::ClientGroup() : isServed(false) {}

void ClientGroup::addClient(Client* client) {
    clients.push_back(client);
}

void ClientGroup::removeClient(Client* client) {
    clients.erase(std::remove(clients.begin(), clients.end(), client), clients.end());
}

bool ClientGroup::getIsServed() const {
    return isServed;
}

void ClientGroup::setIsServed(bool served) {
    isServed = served;
}

ClientGroup::~ClientGroup() {
    for (Client* client : clients) {
        delete client;
    }
}
