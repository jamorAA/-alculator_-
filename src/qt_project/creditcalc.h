#ifndef CREDITCALC_H
#define CREDITCALC_H

#include <QWidget>

extern "C" {
#include "../s21_calc_back.h"
}

namespace Ui {
class creditCalc;
}

class creditCalc : public QWidget {
  Q_OBJECT

 public:
  explicit creditCalc(QWidget *parent = nullptr);
  ~creditCalc();

 private slots:
  void on_button_calculate_clicked();

 private:
  Ui::creditCalc *ui;
};

#endif  // CREDITCALC_H
