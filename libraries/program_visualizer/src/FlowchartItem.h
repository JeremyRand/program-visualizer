#ifndef FLOWCHARTITEM_H
#define FLOWCHARTITEM_H

#include <QRectF>
#include <QPointF>
#include <QTreeWidget>
#include <QGraphicsItem>
#include <QPainter>

#include <QGraphicsSimpleTextItem>
#include <QtSvg/QGraphicsSvgItem>
#include <QtSvg/QSvgRenderer>

#include "BrowserItem.h"

class FlowchartItem : public QGraphicsItem
{

public:

    FlowchartItem();
    FlowchartItem(QTreeWidget *parentTreeWidget = 0, int type = 0, QString nameText = 0);
    FlowchartItem(QTreeWidget *parentTreeWidget = 0, FlowchartItem *parentItem = 0, int type = 0, QString nameText = 0);
    ~FlowchartItem();

    FlowchartItem* parentItem();
    BrowserItem* browserItem();
    QString nameText();
    QString itemText();
    QPointF leftConnectionPoint();
    QPointF rightConnectionPoint();
    QRectF* rectF();
    int level();
    void setLevel(int level);
    int numberOfChildren();
    void setNumberOfChildren(int number);
    void createBrowserItem();
    void setItemText(QString text);
    void setLocation(float topLeftX, float topLeftY);

private:
    FlowchartItem *m_parentItem;
    BrowserItem *m_browserItem;
    QString m_nameText;
    QString m_itemText;
    QTreeWidget *m_treeWidget;
    QRectF *m_rectF;
    QSvgRenderer *m_svgGraphics;
    QGraphicsSvgItem *m_background, *m_backgroundLeft, *m_backgroundRight;
    QGraphicsSimpleTextItem *m_textitem;
    QPointF m_leftConnectionPoint;
    QPointF m_rightConnectionPoint;
    int m_type;
    int m_level;
    int m_numberOfChildren;
    bool m_hasParentItem;
    bool m_scaled;

    /*Pure virtual function from QGraphicsItem that must be reimplemented*/
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);

signals:
    void flowchartItemClicked(BrowserItem *parent);


};

#endif // FLOWCHARTITEM_H
