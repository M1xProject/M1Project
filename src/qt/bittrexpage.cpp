#include "bittrexpage.h"
#include "ui_bittrexpage.h"
#include <QTWebKitWidgets/QWebView>
#include <QUrl>

BittrexPage::BittrexPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BittrexPage)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("https://bittrex.com/Market/Index?MarketName=BTC-M1"));
    ui->webView_2->load(QUrl("https://bter.com"));
    ui->webView_3->load(QUrl("https://cryptsy.com"));
    ui->webView_4->load(QUrl("https://www.poloniex.com"));
    ui->webView_5->load(QUrl("https://c-cex.com/?p=m1-btc"));
    ui->webView_6->load(QUrl("https://yobit.net/en/trade/M1/BTC"));
    ui->webView_8->load(QUrl("https://bleutrade.com/exchange/M1/BTC"));
}

BittrexPage::~BittrexPage()
{
    delete ui;
}
