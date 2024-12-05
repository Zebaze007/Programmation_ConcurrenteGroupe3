#ifndef COUNTER_H
#define COUNTER_H

#include "Command.h"
#include "Counter.h"

class Counter {
private:
    int readyDish;
    Command* commands;

public:
    void listenCommands();
    void sendCommand(Command* command);
};

#endif // COUNTER_H
