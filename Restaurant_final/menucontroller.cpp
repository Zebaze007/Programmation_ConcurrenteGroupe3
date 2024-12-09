#include "menucontroller.h"

MenuController::MenuController() {}

MenuController::~MenuController() {
    for (Menu *menuItem : menuItems) {
        delete menuItem;
    }
    menuItems.clear();
}

void MenuController::addMenuItem(Menu *menuItem) {
    menuItems.append(menuItem);
}

void MenuController::removeMenuItem(int id) {
    for (int i = 0; i < menuItems.size(); ++i) {
        if (menuItems[i]->getId() == id) {
            delete menuItems[i];
            menuItems.removeAt(i);
            break;
        }
    }
}

Menu* MenuController::findMenuItemById(int id) const {
    for (Menu *menuItem : menuItems) {
        if (menuItem->getId() == id) {
            return menuItem;
        }
    }
    return nullptr;
}

QVector<Menu*> MenuController::getAllMenuItems() const {
    return menuItems;
}


QString MenuController::displayMenu() const {
    QString menuText;
    for (Menu *menuItem : menuItems) {
        menuText += QString("ID: %1 | Name: %2 | Price: $%3\n")
        .arg(menuItem->getId())
            .arg(menuItem->getName())
            .arg(menuItem->getPrice());
        if (!menuItem->getDescription().isEmpty()) {
            menuText += QString("Description: %1\n").arg(menuItem->getDescription());
        }
        menuText += "\n";
    }
    return menuText;
}
