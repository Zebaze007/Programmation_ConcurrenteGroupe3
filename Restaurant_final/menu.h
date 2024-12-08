#ifndef MENU_H
#define MENU_H

#include <QString>

class Menu {
public:
    Menu(int id, const QString &name, double price, const QString &description = "");
    ~Menu();

    int getId() const;
    QString getName() const;
    double getPrice() const;
    QString getDescription() const;

    void setName(const QString &name);
    void setPrice(double price);
    void setDescription(const QString &description);

private:
    int id;
    QString name;
    double price;
    QString description;
};

#endif // MENU_H
