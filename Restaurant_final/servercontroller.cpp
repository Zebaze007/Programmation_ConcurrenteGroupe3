#include "servercontroller.h"

ServerController::ServerController() {}

ServerController::~ServerController()
{
    // Libérer la mémoire des serveurs
    for (Server *server : servers) {
        delete server;
    }
}

void ServerController::addServer(Server *server)
{
    servers.append(server);
}

void ServerController::moveServer(int serverId, int x, int y, double scale)
{
    for (Server *server : servers) {
        if (server->getId() == serverId) {
            server->setPosition(x, y, scale);
            break;
        }
    }
}

Server* ServerController::findServerById(int serverId)
{
    for (Server *server : servers) {
        if (server->getId() == serverId) {
            return server;
        }
    }
    return nullptr;
}
