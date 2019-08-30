#include "mainwindow.h"
#include "warehouse.h"
#include <QApplication>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <login.h>
#include <enroll.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login login;
    MainWindow w;
    if(login.exec() != QDialog::Accepted)
    return -1;
    w.show();
    return a.exec();

}
