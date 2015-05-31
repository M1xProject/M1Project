#include "shockbot.h"
#include "ui_shockbot.h"

ShockBot::ShockBot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShockBot)
{
    ui->setupUi(this);
}

ShockBot::~ShockBot()
{
    delete ui;
}
