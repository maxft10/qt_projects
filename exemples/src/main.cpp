#include <iostream>
#include <QApplication>
#include <QLabel>
#include "HelloWidget.h"

using namespace std;

int main(int argc, char** argv){

    QApplication app(argc, argv);
    HelloWidget w;

    app.exec();

}
