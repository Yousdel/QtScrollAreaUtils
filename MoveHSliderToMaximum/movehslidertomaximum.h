#ifndef MOVESLIDERTOMAXIMUM_H
#define MOVESLIDERTOMAXIMUM_H

#include <QObject>

QT_BEGIN_NAMESPACE
class QScrollArea;
class QTimer;
QT_END_NAMESPACE

class MoveHorizontalSliderToMaximum : public QObject
{
    Q_OBJECT
public:
    MoveHorizontalSliderToMaximum(
            QScrollArea *scrollArea,
            QObject *parent = nullptr);
    void setScrollArea(
            QScrollArea *scrollArea){
        area=scrollArea;
    }
    void moveSliderToMaximum();

signals:

private:
    QScrollArea *area {nullptr};
    QTimer *t {nullptr};

private slots:
    void moveToMaximum();
};

#endif // MOVESLIDERTOMAXIMUM_H
