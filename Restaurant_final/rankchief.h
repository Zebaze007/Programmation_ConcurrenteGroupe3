#ifndef RANKCHIEF_H
#define RANKCHIEF_H

#include <QObject>
#include <QGraphicsPixmapItem>

class RankChief : public QObject {
    Q_OBJECT

public:
    explicit RankChief(const QString &imagePath, int id, QObject *parent = nullptr);
    ~RankChief();

    void setPosition(int x, int y, double scale = 100.0);
    QGraphicsPixmapItem* getGraphicsItem() const;
    int getId() const;

private:
    QGraphicsPixmapItem *graphicsItem;
    int id; // Identifiant du Rank Chief
};

#endif // RANKCHIEF_H
