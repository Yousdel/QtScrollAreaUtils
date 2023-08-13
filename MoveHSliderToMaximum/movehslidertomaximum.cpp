#include "movehslidertomaximum.h"

#include <QScrollArea>
#include <QScrollBar>
#include <QTimer>
#include <QDebug>



MoveHorizontalSliderToMaximum::MoveHorizontalSliderToMaximum(
        QScrollArea *scrollArea, QObject *parent) :
    QObject(parent)
{
    setScrollArea(scrollArea);
    t= new QTimer(this);
    connect(t, &QTimer::timeout,
            this, &MoveHorizontalSliderToMaximum::moveToMaximum);
}

void MoveHorizontalSliderToMaximum::moveSliderToMaximum()
{
    if (area==nullptr) return;
    t->start(0x20);
}

void MoveHorizontalSliderToMaximum::moveToMaximum()
{
    area->horizontalScrollBar()->setSliderPosition(
                area->horizontalScrollBar()->maximum());
    t->stop();
}
