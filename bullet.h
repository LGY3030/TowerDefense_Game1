#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsPixmapItem>
#include<QObject>
class bullet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    bullet(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};
#endif // BULLET_H
