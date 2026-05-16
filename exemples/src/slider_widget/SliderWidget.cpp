#include <iostream>
#include <QApplication>
#include <QLCDNumber>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "SliderWidget.h"

using namespace std;

SliderWidget::SliderWidget(): QWidget(){

    lcd = new QLCDNumber(this);
    slider = new QSlider(Qt::Horizontal, this);
    layout = new QVBoxLayout;

    QPushButton* b = new QPushButton("leave", this);

    layout->addWidget(lcd);
    layout->addWidget(slider);
    layout->addWidget(b);
    setLayout(layout);

    connect(slider, &QSlider::valueChanged, lcd, qOverload<int>(&QLCDNumber::display));  // [lcd](int value) { lcd->display(value); }
    connect(b, &QPushButton::clicked, this, QApplication::quit);

    this->show();

}