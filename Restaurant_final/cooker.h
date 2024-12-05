#ifndef COOKER_H
#define COOKER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Cooker : public QObject {
    Q_OBJECT

public:
    Cooker(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Cooker();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // COOKER_H
