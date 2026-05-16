#pragma once
#include <QLCDNumber>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>

using namespace std;

class SliderWidget: public QWidget{

    Q_OBJECT

private:
    QLCDNumber* lcd;
    QSlider* slider;
    QVBoxLayout* layout;

public:
    SliderWidget();

};
