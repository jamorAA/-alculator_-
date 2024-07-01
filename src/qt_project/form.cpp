#include "form.h"

#include "../s21_calc_back.h"
#include "mainwindow.h"
#include "ui_form.h"

Form::Form(QWidget *parent) : QWidget(parent), ui(new Ui::Form) {
  ui->setupUi(this);
}

Form::~Form() { delete ui; }

void Form::slot(QString func, double x_min, double x_max, double y_min,
                double y_max) {
  x.clear();
  y.clear();
  ui->widget->removeGraph(0);
  ui->widget->replot();

  h = 0.001;
  xBegin = x_min;
  xEnd = x_max + h;

  ui->widget->xAxis->setRange(x_min, x_max);
  ui->widget->yAxis->setRange(y_min, y_max);

  QByteArray byteArray = func.toLatin1();
  char *in = byteArray.data();
  char out[TOKEN_LEN * 2];
  d_algorithm(in, out);

  for (X = xBegin; X <= xEnd; X += h) {
    x.push_back(X);
    y.push_back(get_solution(out, X));
  }

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();

  // ui->widget->setInteraction(QCP::iRangeZoom, true);
  // ui->widget->setInteraction(QCP::iRangeDrag, true);
}
