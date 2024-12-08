#include "menu.h"

Menu::Menu(int id, const QString &name, double price, const QString &description)
    : id(id), name(name), price(price), description(description) {}

Menu::~Menu() {}

int Menu::getId() const {
    return id;
}

QString Menu::getName() const {
    return name;
}

double Menu::getPrice() const {
    return price;
}

QString Menu::getDescription() const {
    return description;
}

void Menu::setName(const QString &name) {
    this->name = name;
}

void Menu::setPrice(double price) {
    this->price = price;
}

void Menu::setDescription(const QString &description) {
    this->description = description;
}
