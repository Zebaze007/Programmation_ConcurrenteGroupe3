#ifndef KITCHENASSISTANT_H
#define KITCHENASSISTANT_H

#include <QGraphicsPixmapItem>
#include <QObject>

class KitchenAssistant : public QObject {
    Q_OBJECT

public:
    KitchenAssistant(const QString &imagePath, int id, QObject *parent = nullptr);
    ~KitchenAssistant();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // KITCHENASSISTANT_H
