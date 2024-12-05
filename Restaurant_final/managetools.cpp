#include "ManageTools.h"

bool ManageTools::releaseTool(const std::string& tool) {
    if (leasedTools.find(tool) != leasedTools.end()) {
        leasedTools[tool] = false;
        availableTools[tool] = true;
        return true;
    }
    return false;
}

bool ManageTools::getTool(const std::string& tool) {
    if (availableTools.find(tool) != availableTools.end() && availableTools[tool]) {
        availableTools[tool] = false;
        leasedTools[tool] = true;
        return true;
    }
    return false;
}
