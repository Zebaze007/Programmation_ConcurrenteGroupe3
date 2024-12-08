#ifndef COMMANDCONTROLLER_H
#define COMMANDCONTROLLER_H

#include "command.h"
#include <QVector>

class CommandController {
public:
    CommandController();
    ~CommandController();

    void addCommand(Command *command);
    void removeCommand(int id);
    Command* findCommandById(int id) const;
    QVector<Command*> getAllCommands() const;
    QString displayAllCommands() const;

private:
    QVector<Command*> commands; // Liste des commandes
};

#endif // COMMANDCONTROLLER_H
