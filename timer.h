#ifndef TIMER
#define TIMER

#endif // TIMER

#include <QBasicTimer>
#include <QWidget>
#include <QPointF>
#include <QTime>

class Timer : public QWidget
{
    Q_OBJECT

public:
    Timer(QWidget *parent = 0);

public slots:
    void setPos(const int pos) { position = pos; }

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void keyPressEvent(QKeyEvent *event);

private:
    QBasicTimer timer;
    int position;
    int step;
    int pt;
    QPointF t[4];
    bool b[4];
    int tps_a_jouer[4];
    QTime time;
    int vitesse;
    bool vue;
    bool c_parti;
};

