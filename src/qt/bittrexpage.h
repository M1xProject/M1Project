#ifndef BITTREXPAGE_H
#define BITTREXPAGE_H

#include <QWidget>

namespace Ui {
class BittrexPage;
}

class BittrexPage : public QWidget
{
    Q_OBJECT

public:
    explicit BittrexPage(QWidget *parent = 0);
    ~BittrexPage();

private:
    Ui::BittrexPage *ui;
};

#endif // BITTREXPAGE_H
