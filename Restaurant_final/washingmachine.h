#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include <QGraphicsPixmapItem>
#include <QObject>

class WashingMachine : public QObject {
    Q_OBJECT

public:
    WashingMachine(const QString &imagePath, int id, QObject *parent = nullptr);
    ~WashingMachine();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // WASHINGMACHINE_H
