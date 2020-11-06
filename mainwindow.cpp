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
    this->ui->renderArea->setShape(RenderArea::Astroid);
    // Change background color for render area
    // How was this done?
    // Add a function to change the background color
    // repaints the render area so that the color appears correctly
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_brnHuygensCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);

    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypoCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);

    this->ui->renderArea->repaint();
}
