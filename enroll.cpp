#include "enroll.h"
#include "ui_enroll.h"

enroll::enroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::enroll)
{
    ui->setupUi(this);
}

enroll::~enroll()
{
    delete ui;
}


