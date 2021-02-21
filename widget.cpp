#include "widget.h"
#include "ui_widget.h"
#include "rulerslider.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

     this->setWindowTitle("Ruler Measurement Tools 2020.08.22 Design By Johnson");
    RulerSlider *slider = new RulerSlider(this);

        slider->setFixedSize(this->width(),300);

        slider->setSingleStep(1);

        slider->setRulerSliderRange(0,280);

        slider->setRulerSliderValue(50);

    QObject::connect(slider,SIGNAL(valueChanged(int)),this,SLOT(sliderValueChanged(int)));



}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QMessageBox::aboutQt(this,"about");
}

void Widget::on_pushButton_2_clicked()
{
    QMessageBox::warning(this,"软件架构构想","本软件的设计灵感来源于手机端尺子,此软件的开发，将彻底改变用传统实体尺子测量，继而使用电子版测量，永不坏掉，永不丢掉，一次开发，一劳永逸!2020.08.22 Design By Johnson ");
}
