#ifndef MANAGETOOLS_H
#define MANAGETOOLS_H

#include <unordered_map>
#include <string>

class ManageTools {
private:
    std::unordered_map<std::string, bool> leasedTools;
    std::unordered_map<std::string, bool> availableTools;

public:
    bool releaseTool(const std::string& tool);
    bool getTool(const std::string& tool);
};

#endif // MANAGETOOLS_H
