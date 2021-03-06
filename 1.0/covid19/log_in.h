#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>

namespace Ui {
class log_in;
}

class log_in : public QWidget
{
    Q_OBJECT

public:
    explicit log_in(QWidget *parent = nullptr);
    ~log_in();

private slots:
    void on_pushButton_2_clicked(); // 登录




    void on_pushButton_clicked();  //退出

signals:
    void sendLoginSuccess();
private:
    Ui::log_in *ui;
};

#endif // LOG_IN_H
