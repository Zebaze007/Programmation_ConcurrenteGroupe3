#ifndef FRIDGE_H
#define FRIDGE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QString>
#include <QMap>

class Fridge : public QObject {
    Q_OBJECT

public:
    explicit Fridge(const QString &imagePath, QObject *parent = nullptr);
    ~Fridge();

    void setPosition(int x, int y, double scale = 100.0);
    QGraphicsPixmapItem* getGraphicsItem() const;

    void addIngredient(const QString &ingredient, int quantity);
    bool removeIngredient(const QString &ingredient, int quantity);
    int getIngredientQuantity(const QString &ingredient) const;
    QString listAllIngredients() const;

private:
    QGraphicsPixmapItem *graphicsItem; // Sprite graphique du frigo
    QMap<QString, int> ingredients;   // Stock des ingrédients (nom et quantité)
};

#endif // FRIDGE_H
