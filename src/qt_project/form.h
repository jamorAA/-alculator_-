#ifndef FORM_H
#define FORM_H

#include <QVector>
#include <QWidget>

extern "C" {
#include "../s21_calc_back.h"
}

namespace Ui {
class Form;
}

class Form : public QWidget {
  Q_OBJECT

 public:
  explicit Form(QWidget *parent = nullptr);
  ~Form();

 private:
  Ui::Form *ui;
  double xBegin, xEnd, h, X;

  QVector<double> x, y;

 public slots:
  void slot(QString func, double x_min, double x_max, double y_min,
            double y_max);
};

#endif  // FORM_H
