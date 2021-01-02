/********************************************************************************
** Form generated from reading UI file 'show_winner.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_WINNER_H
#define UI_SHOW_WINNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_show_winner
{
public:
    QLabel *label;
    QLabel *winner;
    QPushButton *pushButton;

    void setupUi(QDialog *show_winner)
    {
        if (show_winner->objectName().isEmpty())
            show_winner->setObjectName(QStringLiteral("show_winner"));
        show_winner->resize(238, 140);
        show_winner->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(198, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(show_winner);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 121, 61));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        winner = new QLabel(show_winner);
        winner->setObjectName(QStringLiteral("winner"));
        winner->setGeometry(QRect(170, 30, 46, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        winner->setFont(font1);
        winner->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(show_winner);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 80, 75, 23));

        retranslateUi(show_winner);

        QMetaObject::connectSlotsByName(show_winner);
    } // setupUi

    void retranslateUi(QDialog *show_winner)
    {
        show_winner->setWindowTitle(QApplication::translate("show_winner", "Congratulation!", 0));
        label->setText(QApplication::translate("show_winner", "WINNER IS PLAYER", 0));
        winner->setText(QString());
        pushButton->setText(QApplication::translate("show_winner", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class show_winner: public Ui_show_winner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_WINNER_H
