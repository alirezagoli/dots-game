#ifndef SHOW_WINNER_H
#define SHOW_WINNER_H

#include <QDialog>

namespace Ui {
class show_winner;
}

class show_winner : public QDialog
{
    Q_OBJECT
    
public:
    explicit show_winner(QWidget *parent = 0, QString winner="");
    ~show_winner();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::show_winner *ui;
};

#endif // SHOW_WINNER_H
