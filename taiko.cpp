#include "taiko.h"
#include "ui_taiko.h"

Taiko::Taiko(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Taiko)
{
    ui->setupUi(this);
}

Taiko::~Taiko()
{
    delete ui;
}

void Taiko::on_exit_clicked()
{
    QApplication::quit();
}

void Taiko::on_start_clicked()
{
    close();
    op.setFixedSize(510,527);
    op.show();
    op.position();
    op.getelapsetime();
}
