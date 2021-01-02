#include "points.h"
#include<QDebug>


points::points(QObject *parent, int Row_size,int Col_size) :
    QGraphicsScene(parent)
{
    RowSize=Row_size;
    ColSize=Col_size;
    PT=player1;
    Player1Score=0;
    Player2Score=0;
    RectCounter=0;
    PS=new PointStatus*[ColSize];
    for(int i=0;i<ColSize;i++)
    {
        PS[i]=new PointStatus[RowSize];
    }
    int h=0;
    int m=0;
    addRect(-10,-10,(ColSize)*30,(RowSize)*30);
    temp.down=temp.left=temp.right=temp.up=&temp;
   for(int i=0;i<RowSize;i++)
   {
      h=0;
       for(int j=0;j<ColSize;j++)
       {
          PS[j][i].down=PS[j][i].left=PS[j][i].right=PS[j][i].up=&temp;
          QGraphicsEllipseItem *point_item= addEllipse(((j*10)+h),((i*10)+m),10,10);
          point_item->setBrush(QBrush("red"));
          point_item->setFlag(QGraphicsItem::ItemIsSelectable,true);
          h=h+20;
       }
        m=m+20;
   }
}

void points::drawline()
{
    QPen mypen;
    mypen.setWidth(3);
    if(PT==player1)
    {
        mypen.setColor(QColor(55,247,9));
    }
    else
    {
        mypen.setColor(QColor(39,2,213));
    }

    addLine(items.at(0)->boundingRect().x()+6,items.at(0)->boundingRect().y()+6,
            items.at(1)->boundingRect().x()+6,items.at(1)->boundingRect().y()+6,mypen);
}

void points::ChangePointStatus()
{
    int x1=(items.at(0)->boundingRect().x()+.5)/30;
    int x2=(items.at(1)->boundingRect().x()+.5)/30;
    int y1=(items.at(0)->boundingRect().y()+.5)/30;
    int y2=(items.at(1)->boundingRect().y()+.5)/30;
    if(x1==x2)
    {
        if(y1<y2)
        {
            PS[x1][y1].down=&PS[x2][y2];
            PS[x2][y2].up=&PS[x1][y1];
        }
        else
        {
            PS[x1][y1].up=&PS[x2][y2];
            PS[x2][y2].down=&PS[x1][y1];
        }
    }
    else //(y1==y2)
    {
        if(x1<x2)
        {
            PS[x1][y1].right=&PS[x2][y2];
            PS[x2][y2].left=&PS[x1][y1];
        }
        else
        {
            PS[x1][y1].left=&PS[x2][y2];
            PS[x2][y2].right=&PS[x1][y1];
        }
    }
}

bool points::CheckRect()
{
    QBrush mybrush(QColor("yellow"),Qt::Dense4Pattern);
    if(PT==player1)
    {
        mybrush.setColor(QColor(27,205,1));
    }
    else
    {
         mybrush.setColor(QColor(18,0,183));
    }
    int x1=(items.at(0)->boundingRect().x()+.5)/30;
    int x2=(items.at(1)->boundingRect().x()+.5)/30;
    int y1=(items.at(0)->boundingRect().y()+.5)/30;
    int y2=(items.at(1)->boundingRect().y()+.5)/30;
    bool BeingRect=false;
    if(x1==x2)
    {
        if(y1<y2)
        {
            if(PS[x1][y1].down->right->up->left==&PS[x1][y1])
            {
                addRect(items.at(0)->boundingRect().x()+6,items.at(0)->boundingRect().y()+6,
                        30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
            if(PS[x1][y1].down->left->up->right==&PS[x1][y1])
            {
                addRect(items.at(0)->boundingRect().x()-30+6,items.at(0)->boundingRect().y()+6,
                        30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
        }
       else //(y1>y2)
        {
            if(PS[x1][y1].up->right->down->left==&PS[x1][y1])
            {
                addRect(items.at(1)->boundingRect().x()+6,items.at(1)->boundingRect().y()+6,
                        30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
            if(PS[x1][y1].up->left->down->right==&PS[x1][y1])
            {
                 addRect(items.at(1)->boundingRect().x()-30+6,items.at(1)->boundingRect().y()+6,
                            30,30,QPen(),mybrush);
                 BeingRect=true;
                 Updating_Score_RectCount();
            }
        }
    }
    else //(y1==y2)
    {
        if(x1<x2)
        {
            if(PS[x1][y1].right->down->left->up==&PS[x1][y1])
            {
                addRect(items.at(0)->boundingRect().x()+6,items.at(0)->boundingRect().y()+6,
                           30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
            if( PS[x1][y1].right->up->left->down==&PS[x1][y1])
            {
                addRect(items.at(0)->boundingRect().x()+6,items.at(0)->boundingRect().y()-30+6,
                           30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
        }
        else //(x1>x2)
        {
            if(PS[x1][y1].left->down->right->up==&PS[x1][y1])
            {
                addRect(items.at(1)->boundingRect().x()+6,items.at(1)->boundingRect().y()+6,
                           30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
            if(PS[x1][y1].left->up->right->down==&PS[x1][y1])
            {
                addRect(items.at(1)->boundingRect().x()+6,items.at(1)->boundingRect().y()-30+6,
                           30,30,QPen(),mybrush);
                BeingRect=true;
                Updating_Score_RectCount();
            }
        }
    }
    return BeingRect;
}

void points::Updating_Score_RectCount()
{
    RectCounter++;
    if(PT==player1)
    {
        Player1Score++;
        emit UpdatingScoreBoard1(Player1Score);
    }
    else
    {
        Player2Score++;
        emit UpdatingScoreBoard2(Player2Score);
    }
}

void points::ChangePlayerTurn()
{
    if(PT==player1)
    {
        PT=player2;
        emit PlayerTurn("2");
    }
    else
    {
        PT=player1;
        emit PlayerTurn("1");
    }

}

void points::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    items=selectedItems();
    if(items.size()==2)
    {
        drawline();
        ChangePointStatus();
        if((CheckRect()==false))
        {
            ChangePlayerTurn();
        }
        if(RectCounter==((RowSize-1)*(ColSize-1)))
        {
            if(Player1Score>Player2Score)
            {
                show_winner SW(0,"1");
                SW.exec();
                emit exitmainwindows();
            }
            else
            {
                show_winner SW(0,"2");
                SW.exec();
                emit exitmainwindows();
            }
        }
    }
}
