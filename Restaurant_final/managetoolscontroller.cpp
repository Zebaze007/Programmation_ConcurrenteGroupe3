#include "ManageToolsController.h"

ManageToolsController::ManageToolsController(ManageTools* tools) : tools(tools) {}

ManageToolsController::~ManageToolsController() {}

bool ManageToolsController::requestTool(const std::string& toolName) {
    return tools->getTool(toolName); // Vérifie et loue l'outil si disponible
}

void ManageToolsController::releaseTool(const std::string& toolName) {
    tools->releaseTool(toolName); // Libère l'outil
}
