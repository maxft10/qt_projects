#include <iostream>
#include <QDialog>
#include <QComboBox>
#include <QStyleFactory>
#include <QLabel>
#include <QApplication>
#include <QVBoxLayout>

#include "StyleDialog.h"

using namespace std;

StyleDialog::StyleDialog(): QDialog(){

    combobox = new QComboBox(this);
    combobox->addItems(QStyleFactory::keys());

    QLabel *styleLabel = new QLabel(tr("&Style :"), this);
    styleLabel->setBuddy(combobox);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(styleLabel);
    layout->addWidget(combobox);
    setLayout(layout);

    connect(combobox, &QComboBox::textActivated,
            this, &StyleDialog::changeStyle);

    this->show();
}

void StyleDialog::changeStyle(const QString& style)
{
    std::cout << "Style choisi : "
              << style.toStdString() << std::endl;

    QApplication::setStyle(QStyleFactory::create(style));
    QApplication::setPalette(QApplication::style()->standardPalette());
}