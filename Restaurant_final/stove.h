#ifndef STOVE_H
#define STOVE_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Stove : public QObject {
    Q_OBJECT

public:
    Stove(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Stove();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // STOVE_H
