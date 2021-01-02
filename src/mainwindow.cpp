#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QGraphicsView>
#include"points.h"
#include"show_winner.h"

MainWindow::MainWindow(QWidget *parent,int Row_size,int Col_size) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsView *view=new QGraphicsView;
    points *point=new points(0,Row_size,Col_size);
    view->setScene(point);
    setCentralWidget(view);
    view->setDragMode(QGraphicsView::RubberBandDrag);
    ui->Player1ScoreLcd->setParent(this);
    ui->Player2ScoreLcd->setParent(this);
    connect(point,SIGNAL(UpdatingScoreBoard1(int)),ui->Player1ScoreLcd,
            SLOT(display(int)));
    connect(point,SIGNAL(UpdatingScoreBoard2(int)),ui->Player2ScoreLcd,
            SLOT(display(int)));
    ui->player1label->setParent(this);
    ui->player2label->setParent(this);
    connect(point,SIGNAL(exitmainwindows()),this,SLOT(close()));
    ui->Turnlabel->setParent(this);
    ui->PlayerTurnLabel->setParent(this);
    connect(point,SIGNAL(PlayerTurn(QString)),ui->PlayerTurnLabel,
            SLOT(setText(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
