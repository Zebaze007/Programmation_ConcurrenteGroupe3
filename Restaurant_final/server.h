#ifndef SERVER_H
#define SERVER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Server : public QObject {
    Q_OBJECT

public:
    Server(const QString &imagePath, int id, QObject *parent = nullptr);
    ~Server();

    void setPosition(int x, int y, double scale);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id;
};

#endif // SERVER_H
