#include "Socialpage.h"
#include "ui_Socialpage.h"
#include <QTWebKitWidgets/QWebView>
#include <QUrl>

SocialPage::SocialPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SocialPage)
{
    ui->setupUi(this);
    ui->webView_3->load(QUrl("https://twitter.com/SupplyShock"));
    ui->webView_2->load(QUrl("http://coinmarketcap.com/currencies/supply-shock/"));
    ui->webView->load(QUrl("https://bitcointalk.org/index.php?topic=1057521"));
    ui->webView_4->load(QUrl("http://www.reddit.com/r/M1Project"));
}

SocialPage::~SocialPage()
{
    delete ui;
}
