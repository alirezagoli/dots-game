#include "show_winner.h"
#include "ui_show_winner.h"

show_winner::show_winner(QWidget *parent,QString winner):
    QDialog(parent),
    ui(new Ui::show_winner)
{
    ui->setupUi(this);
    ui->winner->setText(winner);
}

show_winner::~show_winner()
{
    delete ui;
}

void show_winner::on_pushButton_clicked()
{
    accept();
}
