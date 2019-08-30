#include "login.h"
#include "ui_login.h"

#include<mainwindow.h>
#include <QMessageBox>
#include <QTextCodec>


Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
//    delete ui;
}

void Login::on_pushButton_clicked()
{
    if(this->ui->lineEdit_account->text().trimmed()== tr("admin") && this->ui->lineEdit_pwd->text().trimmed()==tr("admin"))
    {
       accept();
    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!"),QMessageBox::Yes);
        this->ui->lineEdit_account->clear();
        this->ui->lineEdit_pwd->clear();
        this->ui->lineEdit_account->setFocus();
        Login lg;
        lg.exec();
    }
}
