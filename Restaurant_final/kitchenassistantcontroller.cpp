#include "kitchenassistantcontroller.h"

void KitchenAssistantController::addKitchenAssistant(KitchenAssistant *assistant) {
    assistants.append(assistant);
}

void KitchenAssistantController::moveKitchenAssistant(int assistantId, int x, int y, double scale) {
    for (KitchenAssistant *assistant : assistants) {
        if (assistant->getId() == assistantId) {
            assistant->setPosition(x, y, scale);
            break;
        }
    }
}

KitchenAssistant* KitchenAssistantController::findKitchenAssistantById(int assistantId) {
    for (KitchenAssistant *assistant : assistants) {
        if (assistant->getId() == assistantId) {
            return assistant;
        }
    }
    return nullptr;
}
