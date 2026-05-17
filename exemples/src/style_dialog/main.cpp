#include <iostream>
#include <QApplication>

#include "StyleDialog.h"

using namespace std;

int main(int argc, char** argv){

    QApplication app(argc, argv);
    StyleDialog s;

    return app.exec();
}