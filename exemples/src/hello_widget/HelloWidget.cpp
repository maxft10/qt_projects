#include <iostream>
#include <QLabel>
#include <QString>
#include <QWidget>
#include <QPushButton>
#include <QApplication>

#include "HelloWidget.h"

using namespace std;

HelloWidget::HelloWidget(){

    label = new QLabel(QString("<H1><center>Hello World !</center></H1>"), this); // if widget ou this => nullptr, so label has no parent

    button = new QPushButton("leave", this);

    button->setGeometry(50,50,label->width(),label->width());   // setGeometry = move + resize
    button->move(50, 50);                                       // move the button at a specific location
    button->resize(150, 50);                                    // change button's size
    button->setFont(QFont("Arial", 18, QFont::Bold));           // set police

    QObject::connect(button, &QPushButton::clicked, this, QApplication::quit);

    this->show();
}


// Balise Html
// new QLabel("<b>texte</b>", nullptr);                             // Gras
// new QLabel("<i>texte</i>", nullptr);                             // Italique
// new QLabel("<font color='red'>texte</font>", nullptr);           // Couleur
// new QLabel("<a href='https://qt.io'>Qt</a>", nullptr);           // Lien
// new QLabel("<h2><font color='blue'>Hello</font></h2>", nullptr); // Combinaison
