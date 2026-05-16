#pragma once

#include <iostream>
#include <QLabel>
#include <QWidget>
#include <QPushButton>

using namespace std;

class HelloWidget: public QWidget{

    Q_OBJECT

private:
    QLabel* label;
    QPushButton* button;

public:
    HelloWidget();

};
