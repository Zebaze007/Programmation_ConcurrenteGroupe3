#ifndef DISH_H
#define DISH_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Dish : public QObject {
    Q_OBJECT

public:
    // Constructeur normal avec paramètres
    Dish(const QString &imagePath, int id, QObject *parent = nullptr);

    // Constructeur par défaut pour les tests unitaires
    Dish(QObject *parent = nullptr);

    ~Dish();

    void setPosition(int x, int y, double scale = 100.0);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // DISH_H
