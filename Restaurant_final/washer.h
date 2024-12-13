#ifndef WASHER_H
#define WASHER_H

#include "dishwasher.h"
#include "washingmachine.h"
#include <QGraphicsPixmapItem>
#include <QObject>

class Washer : public QObject {
    Q_OBJECT

public:
    // Constructeur normal avec paramètres
    Washer(const QString &imagePath, int id, QObject *parent = nullptr);

    // Constructeur par défaut pour les tests unitaires
    Washer(QObject *parent = nullptr);

    ~Washer();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

    void fillDishwasher();
    void emptyDishwasher();
    void fillWashingMachine();
    void emptyWashingMachine();

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // WASHER_H
