#ifndef GAME_SIZE_H
#define GAME_SIZE_H

#include <QDialog>

namespace Ui {
class game_size;
}

class game_size : public QDialog
{
    Q_OBJECT
    
public:
    explicit game_size(QWidget *parent = 0);
    ~game_size();
    QString RowSize;
    QString ColSize;
    
private:

    Ui::game_size *ui;

private slots:
void on_ok_btn_clicked();
};



#endif // GAME_SIZE_H
