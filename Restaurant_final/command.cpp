#include "command.h"

Command::Command(int id, int clientId, const QVector<Menu*> &orderedItems)
    : id(id), clientId(clientId), orderedItems(orderedItems) {}

Command::~Command() {}

int Command::getId() const {
    return id;
}

int Command::getClientId() const {
    return clientId;
}

QVector<Menu*> Command::getOrderedItems() const {
    return orderedItems;
}

double Command::calculateTotalPrice() const {
    double total = 0.0;
    for (Menu *item : orderedItems) {
        total += item->getPrice();
    }
    return total;
}

QString Command::displayCommandDetails() const {
    QString details = QString("Command ID: %1\nClient ID: %2\n").arg(id).arg(clientId);
    for (Menu *item : orderedItems) {
        details += QString("- %1 ($%2)\n").arg(item->getName()).arg(item->getPrice());
    }
    details += QString("Total Price: $%1\n").arg(calculateTotalPrice());
    return details;
}

void Command::addItem(Menu *item) {
    orderedItems.append(item);
}

void Command::removeItem(int menuItemId) {
    for (int i = 0; i < orderedItems.size(); ++i) {
        if (orderedItems[i]->getId() == menuItemId) {
            orderedItems.removeAt(i);
            break;
        }
    }
}
