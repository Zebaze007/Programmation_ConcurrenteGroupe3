#ifndef COOKCHIEF_H
#define COOKCHIEF_H

#include <QGraphicsPixmapItem>
#include <QObject>

class CookChief : public QObject {
    Q_OBJECT

public:
    CookChief(const QString &imagePath, int id, QObject *parent = nullptr);
    ~CookChief();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // COOKCHIEF_H
