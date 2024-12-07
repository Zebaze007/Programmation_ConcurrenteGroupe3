#ifndef SERVERCONTROLLER_H
#define SERVERCONTROLLER_H

#include <QVector>
#include "server.h"

class ServerController {
public:
    ServerController();
    ~ServerController();

    void addServer(Server *server);
    void moveServer(int serverId, int x, int y, double scale = 100.0);
    Server* findServerById(int serverId);

private:
    QVector<Server*> servers; // Liste des serveurs
};

#endif // SERVERCONTROLLER_H
