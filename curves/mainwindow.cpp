#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->spinScale->setValue(this->ui->renderArea->scale());
    this->ui->spinInterval->setValue(this->ui->renderArea->intervalLength());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui()
{
    this->ui->spinScale->setValue(this->ui->renderArea->scale());
    this->ui->spinInterval->setValue(this->ui->renderArea->intervalLength());
    this->ui->spinCount->setValue(this->ui->renderArea->stepCount());
}
void MainWindow::on_btnAstroid_clicked()
{
    // change background color for rendered area.
    // use the ui object to access our render area
    this->ui->renderArea->setShape(RenderArea::Astroid);
    this->ui->renderArea->repaint();
    update_ui();

}

void MainWindow::on_btnCycloid_clicked()
{
    // change background color for rendered area.
    // use the ui object to access our render area
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_Huygens_clicked()
{
    // change background color for rendered area.
    // use the ui object to access our render area
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->repaint();
    update_ui();
}
void MainWindow::on_btnHypo_clicked()
{
    // change background color for rendered area.
    // use the ui object to access our render area
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnLine_clicked()
{
    // change background color for rendered area.
    // use the ui object to access our render area
    this->ui->renderArea->setShape(RenderArea::Line);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderArea->setScale(scale);
}

void MainWindow::on_spinInterval_valueChanged(double length)
{
    this->ui->renderArea->setInterval(length);
}

void MainWindow::on_spinCount_valueChanged(int count)
{
    this->ui->renderArea->setStepCount(count);
}

void MainWindow::on_btnBackground_clicked()
{
    // open a color picker dialog and change the button's color.
    QColor color = QColorDialog::getColor(Qt::white, this, "Select Color");
    this->ui->renderArea->setBackgroundColor(color);

}

void MainWindow::on_btnLineColor_clicked()
{
    // open a color picker dialog and change the button's color.
    QColor color = QColorDialog::getColor(ui->renderArea->shapeColor(), this, "Select Color");
    this->ui->renderArea->setShapeColor(color);
}
