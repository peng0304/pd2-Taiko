#include "play.h"
#include "ui_play.h"

Play::Play(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Play)
{
    ui->setupUi(this);
}

void Play::position()
{
    for(int i=0;i<8;i++)
    {
        p[i] = (rand() % 1000+1)+500;
    }
    ui->red1->setGeometry(p[0], 160, 51, 51);
    ui->red2->setGeometry(p[1], 160, 51, 51);
    ui->red3->setGeometry(p[2], 160, 51, 51);
    ui->red4->setGeometry(p[3], 160, 51, 51);
    ui->blue1->setGeometry(p[4], 160, 51, 51);
    ui->blue2->setGeometry(p[5], 160, 51, 51);
    ui->blue3->setGeometry(p[6], 160, 51, 51);
    ui->blue4->setGeometry(p[7], 160, 51, 51);

}
    void Play::getelapsetime(){
        time = new QTimer;
        connect(time,SIGNAL(timeout()),this,SLOT(count()));
        time->start(10);
    }
    void Play::count()
    {
        mark++;
        for(int i=0;i<8;i++)
        {
            p[i]-=2;
        }
        ui->red1->setGeometry(p[0], 160, 51, 51);
        ui->red2->setGeometry(p[1], 160, 51, 51);
        ui->red3->setGeometry(p[2], 160, 51, 51);
        ui->red4->setGeometry(p[3], 160, 51, 51);
        ui->blue1->setGeometry(p[4], 160, 51, 51);
        ui->blue2->setGeometry(p[5], 160, 51, 51);
        ui->blue3->setGeometry(p[6], 160, 51, 51);
        ui->blue4->setGeometry(p[7], 160, 51, 51);

        for(int i=0;i<8;i++)
        {
            if(p[i]<0)
            {
                p[i] = (rand()%811+1)+500;
            }
        }

        if(mark==100)
        {
            t--;
            ui->time_label->setNum(t);
            mark=0;
        }
         if(t==0)
         {
             QMessageBox::StandardButton a = QMessageBox::information(NULL, "GameOver!", "Score:" + QString::number(score)  + "\n play again?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
                if(a==QMessageBox::Yes)
                {
                    t=30;
                    score=0;
                    for(int i=0;i<8;i++)
                    {
                        p[i]=(rand() % 900+1)+700;
                    }
                    ui->red1->setGeometry(p[0], 160, 51, 51);
                    ui->red2->setGeometry(p[1], 160, 51, 51);
                    ui->red3->setGeometry(p[2], 160, 51, 51);
                    ui->red4->setGeometry(p[3], 160, 51, 51);
                    ui->blue1->setGeometry(p[4], 160, 51, 51);
                    ui->blue2->setGeometry(p[5], 160, 51, 51);
                    ui->blue3->setGeometry(p[6], 160, 51, 51);
                    ui->blue4->setGeometry(p[7], 160, 51, 51);
                    ui->time_label->setNum(t);
                    ui->score_label->setNum(score);
                }
                if(a==QMessageBox::No)
                {
                    QApplication::quit();
                }
         }
    }
    void Play::keyPressEvent(QKeyEvent *event)
    {
        if(event->key()== Qt::Key_F)
        {
            if(p[0]<40&&p[0]>0)
            {
                score++;
                p[0]=-50;
                ui->score_label->setNum(score);
            }
            if(p[1]<40&&p[0]>0)
            {
                score++;
                p[1]=-50;
                ui->score_label->setNum(score);
            }
            if(p[2]<40&&p[0]>0)
            {
                score++;
                p[2]=-50;
                ui->score_label->setNum(score);
            }
            if(p[3]<40&&p[0]>0)
            {
                score++;
                p[3]=-50;
                ui->score_label->setNum(score);
            }
        }
        if(event->key()== Qt::Key_J)
        {
            if(p[4]<40&&p[0]>0)
            {
                score++;
                p[4]=-50;
                ui->score_label->setNum(score);
            }
            if(p[5]<40&&p[0]>0)
            {
                score++;
                p[5]=-50;
                ui->score_label->setNum(score);
            }
            if(p[6]<40&&p[0]>0)
            {
                score++;
                p[6]=-50;
                ui->score_label->setNum(score);
            }
            if(p[7]<40&&p[0]>0)
            {
                score++;
                p[7]=-50;
                ui->score_label->setNum(score);
            }
        }
    }

Play::~Play()
{
    delete ui;
}
