#ifndef SHOCKBOT_H
#define SHOCKBOT_H

#include <QWidget>

namespace Ui {
class ShockBot;
}

class ShockBot : public QWidget
{
    Q_OBJECT

public:
    explicit ShockBot(QWidget *parent = 0);
    ~ShockBot();

private:
    Ui::ShockBot *ui;
};

#endif // SHOCKBOT_H
