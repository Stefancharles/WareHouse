#ifndef ENROLL_H
#define ENROLL_H

#include <QMainWindow>

namespace Ui {
class enroll;
}

class enroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit enroll(QWidget *parent = 0);
    ~enroll();

private slots:
    void on_pushButton_clicked();

private:
    Ui::enroll *ui;
};

#endif // ENROLL_H
