#include "game_size.h"
#include "ui_game_size.h"

game_size::game_size(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game_size)
{
    ui->setupUi(this);
}


game_size::~game_size()
{
    delete ui;
}


void game_size::on_ok_btn_clicked()
{
   ColSize= ui->Collineedit->text();
   RowSize=ui->Rowlineedit->text();
   if (ColSize == "")
   {
	   ColSize = "11";
   }
   if (RowSize == "")
   {
	   RowSize = "11";
   }
   accept();
}
