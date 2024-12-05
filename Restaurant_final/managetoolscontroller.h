#ifndef MANAGETOOLSCONTROLLER_H
#define MANAGETOOLSCONTROLLER_H

#include "ManageTools.h"

class ManageToolsController {
private:
    ManageTools* tools;

public:
    ManageToolsController(ManageTools* tools);
    ~ManageToolsController();

    bool requestTool(const std::string& toolName); // Demander un outil
    void releaseTool(const std::string& toolName); // Libérer un outil
};

#endif // MANAGETOOLSCONTROLLER_H
