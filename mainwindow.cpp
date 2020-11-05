#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAstroid_clicked()
{
    // Change background color for render area
    // How was this done?
    // Add a function to change the background color
    this->ui->renderArea->setBackgroundColor(Qt::red);
    // repaints the render area so that the color appears correctly
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setBackgroundColor(Qt::green);
    this->ui->renderArea->repaint();
}

void MainWindow::on_brnHuygensCycloid_clicked()
{
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypoCycloid_clicked()
{
    this->ui->renderArea->setBackgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}
