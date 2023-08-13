#include "form.h"
#include "ui_form.h"

#include "MoveHSliderToMaximum/movehslidertomaximum.h"
#include "MoveVSliderToMaximum/movevslidertomaximum.h"


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    MoveHorizontalSliderToMaximum *mhor=
            new MoveHorizontalSliderToMaximum(ui->scrollArea, this);
    MoveVerticalSliderToMaximum *mver=
            new MoveVerticalSliderToMaximum(ui->scrollArea, this);
    mhor->moveSliderToMaximum();
    mver->moveSliderToMaximum();
}
