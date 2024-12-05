#ifndef CLIENTGROUP_H
#define CLIENTGROUP_H

#include <vector>
#include "Client.h"

class ClientGroup {
private:
    std::vector<Client*> clients;
    bool isServed;

public:
    ClientGroup();
    void addClient(Client* client);
    void removeClient(Client* client);
    bool getIsServed() const;
    void setIsServed(bool served);

    ~ClientGroup();
};

#endif // CLIENTGROUP_H
