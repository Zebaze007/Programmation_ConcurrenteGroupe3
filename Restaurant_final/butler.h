#ifndef BUTLER_H
#define BUTLER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Butler : public QObject {
    Q_OBJECT

public:
    Butler(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Butler();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // BUTLER_H
