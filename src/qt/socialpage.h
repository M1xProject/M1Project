#ifndef SocialPAGE_H
#define SocialPAGE_H

#include <QWidget>

namespace Ui {
class SocialPage;
}

class SocialPage : public QWidget
{
    Q_OBJECT

public:
    explicit SocialPage(QWidget *parent = 0);
    ~SocialPage();

private:
    Ui::SocialPage *ui;
};

#endif // SocialPAGE_H
