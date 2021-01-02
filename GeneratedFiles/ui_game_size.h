/********************************************************************************
** Form generated from reading UI file 'game_size.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_SIZE_H
#define UI_GAME_SIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_game_size
{
public:
    QPushButton *ok_btn;
    QLineEdit *Collineedit;
    QLabel *label1;
    QLabel *label2;
    QLineEdit *Rowlineedit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *game_size)
    {
        if (game_size->objectName().isEmpty())
            game_size->setObjectName(QStringLiteral("game_size"));
        game_size->resize(254, 181);
        game_size->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(198, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        ok_btn = new QPushButton(game_size);
        ok_btn->setObjectName(QStringLiteral("ok_btn"));
        ok_btn->setGeometry(QRect(90, 140, 75, 23));
        Collineedit = new QLineEdit(game_size);
        Collineedit->setObjectName(QStringLiteral("Collineedit"));
        Collineedit->setGeometry(QRect(60, 110, 151, 21));
        Collineedit->setStyleSheet(QStringLiteral(""));
        label1 = new QLabel(game_size);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(60, 40, 151, 20));
        QFont font;
        font.setPointSize(9);
        label1->setFont(font);
        label1->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label2 = new QLabel(game_size);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(90, 60, 91, 20));
        label2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        Rowlineedit = new QLineEdit(game_size);
        Rowlineedit->setObjectName(QStringLiteral("Rowlineedit"));
        Rowlineedit->setGeometry(QRect(60, 80, 151, 21));
        label = new QLabel(game_size);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 46, 13));
        label_2 = new QLabel(game_size);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 46, 13));
        QWidget::setTabOrder(ok_btn, Collineedit);

        retranslateUi(game_size);

        QMetaObject::connectSlotsByName(game_size);
    } // setupUi

    void retranslateUi(QDialog *game_size)
    {
        game_size->setWindowTitle(QApplication::translate("game_size", "WELCOME", 0));
        ok_btn->setText(QApplication::translate("game_size", "OK", 0));
        label1->setText(QApplication::translate("game_size", "Please Enter Size Of Game", 0));
        label2->setText(QApplication::translate("game_size", "Defual size:11", 0));
        label->setText(QApplication::translate("game_size", "ROW:", 0));
        label_2->setText(QApplication::translate("game_size", "COL:", 0));
    } // retranslateUi

};

namespace Ui {
    class game_size: public Ui_game_size {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_SIZE_H
