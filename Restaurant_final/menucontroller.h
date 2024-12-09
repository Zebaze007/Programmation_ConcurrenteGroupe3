#ifndef MENUCONTROLLER_H
#define MENUCONTROLLER_H

#include "menu.h"
#include <QVector>
#include <QString>

class MenuController {
public:
    MenuController();
    ~MenuController();

    void addMenuItem(Menu *menuItem);
    void removeMenuItem(int id);
    Menu* findMenuItemById(int id) const;
    QVector<Menu*> getAllMenuItems() const;

    QString displayMenu() const; // Retourne une représentation textuelle du menu


private:
    QVector<Menu*> menuItems; // Liste des plats disponibles
};

#endif // MENUCONTROLLER_H
