#ifndef PLAY_H
#define PLAY_H
#include <Qtcore>
#include <QMainWindow>
#include <time.h>
#include <QTimer>
#include <QLabel>
#include <QtGlobal>
#include <QPixmap>
#include <cstdlib>
#include <QKeyEvent>
#include <QMessageBox>

namespace Ui {
class Play;
}

class Play : public QMainWindow
{
    Q_OBJECT

public:
    explicit Play(QWidget *parent = 0);
    QTimer *time;
    ~Play();
    void getelapsetime();
    void position();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void count();

private:
    Ui::Play *ui;
    int t=30;
    int p[8];
    int score = 0;
    int mark = 0;
};

#endif // PLAY_H
