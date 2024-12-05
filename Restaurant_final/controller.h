#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "IController.h"
#include "Configurator.h"
#include "Restaurant.h"

class Controller : public IController {
private:
    Configurator* config;
    Restaurant* restaurant;

public:
    Controller();
    void saveSimulation();
    void loadSimulation();
    void startSimulation();
    void stopSimulation();
    ~Controller();
};

#endif // CONTROLLER_H
