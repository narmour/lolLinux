#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void searchSummoner();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
