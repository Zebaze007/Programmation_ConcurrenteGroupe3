#ifndef COMMAND_H
#define COMMAND_H

#include <QString>
#include <QVector>
#include "menu.h"


class Command {
public:
    Command(int id, int clientId, const QVector<Menu*> &orderedItems);
    ~Command();

    int getId() const;
    int getClientId() const;
    QVector<Menu*> getOrderedItems() const;
    double calculateTotalPrice() const;
    QString displayCommandDetails() const;
    const QVector<Menu*> &getItemsOrdered() const;


    void addItem(Menu *item);
    void removeItem(int menuItemId);

private:
    int id;                     // Identifiant de la commande
    int clientId;               // Identifiant du client ayant passé la commande
    QVector<Menu*> orderedItems; // Liste des plats commandés
};

#endif // COMMAND_H
