#ifndef KITCHENASSISTANTCONTROLLER_H
#define KITCHENASSISTANTCONTROLLER_H

#include <QVector>
#include "kitchenassistant.h"

class KitchenAssistantController {
public:
    void addKitchenAssistant(KitchenAssistant *assistant);
    void moveKitchenAssistant(int assistantId, int x, int y, double scale = 100.0);
    KitchenAssistant* findKitchenAssistantById(int assistantId);

private:
    QVector<KitchenAssistant*> assistants; // Liste des assistants de cuisine
};

#endif // KITCHENASSISTANTCONTROLLER_H
