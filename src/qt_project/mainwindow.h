#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <creditcalc.h>
#include <depositcalc.h>
#include <form.h>

#include <QMainWindow>

extern "C" {
#include "../s21_calc_back.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  Form *form;
  creditCalc creditcalc;
  depositCalc depositcalc;
  double get_token_last_index();

 signals:
  void signal(QString, double, double, double, double);

 private slots:
  void digits_numbers();
  void on_button_dot_clicked();
  void on_button_del_clicked();
  void on_button_result_clicked();
  void math_operations();
  void brackets();
  void functions();
  void on_button_backspace_clicked();
  void on_graphic_build_clicked();
  void on_button_credit_calc_clicked();
  void on_button_deposit_calc_clicked();
};

#endif  // MAINWINDOW_H
