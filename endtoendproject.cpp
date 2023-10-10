
#include "endtoendproject.hpp"
#include "./ui_endtoendproject.h"


EndToEndProject::EndToEndProject(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EndToEndProject)
{
    ui->setupUi(this);
}

EndToEndProject::~EndToEndProject()
{
    delete ui;
}


