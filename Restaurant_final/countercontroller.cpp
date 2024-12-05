#include "countercontroller.h"
#include <iostream>

void Counter::listenCommands() {
    std::cout << "Counter is listening for new commands." << std::endl;
}

void Counter::sendCommand(Command* command) {
    std::cout << "Counter is sending a command to the cookers." << std::endl;
}
