#include <iostream>
#include <QDialog>
#include <QComboBox>

using namespace std;

class StyleDialog: public QDialog{

    Q_OBJECT

private:
    QComboBox* combobox;

public:
    StyleDialog();

private slots:
    void changeStyle(const QString& style);
};
