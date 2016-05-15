#ifndef TAIKO_H
#define TAIKO_H

#include <QMainWindow>
#include "play.h"

namespace Ui {
class Taiko;
}

class Taiko : public QMainWindow
{
    Q_OBJECT

public:
    explicit Taiko(QWidget *parent = 0);
    ~Taiko();

private slots:
    void on_exit_clicked();

    void on_start_clicked();

private:
    Ui::Taiko *ui;
    Play op;
};

#endif // TAIKO_H
