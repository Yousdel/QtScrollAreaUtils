#include "movevslidertomaximum.h"

#include <QScrollArea>
#include <QScrollBar>
#include <QTimer>
#include <QDebug>



MoveVerticalSliderToMaximum::MoveVerticalSliderToMaximum(
        QScrollArea *scrollArea, QObject *parent) :
    QObject(parent)
{
    setScrollArea(scrollArea);
    t= new QTimer(this);
    connect(t, &QTimer::timeout,
            this, &MoveVerticalSliderToMaximum::moveToMaximum);
}

void MoveVerticalSliderToMaximum::moveSliderToMaximum()
{
    if (area==nullptr) return;
    t->start(0x20);
}

void MoveVerticalSliderToMaximum::moveToMaximum()
{
    area->verticalScrollBar()->setSliderPosition(
                area->verticalScrollBar()->maximum());
    t->stop();
}
