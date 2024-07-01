#ifndef DEPOSITCALC_H
#define DEPOSITCALC_H

#include <math.h>

#include <QComboBox>
#include <QDate>
#include <QDateEdit>
#include <QDialog>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTableWidget>
#include <QTextEdit>

struct St_aos {
  int type;
  QDate date;
  double sum;
};

struct St_out {
  int type;  // 1 - старт депозита, 2 - начисление процентов, 3 - пополнения или
             // снятия, 4 - начало года, 5 - конец депозита
  QDate date;
  double perc;
  double adds_or_subs;
  double balance;
};

namespace Ui {
class depositCalc;
}

class depositCalc : public QWidget {
  Q_OBJECT

 public:
  explicit depositCalc(QWidget *parent = nullptr);
  ~depositCalc();

 private slots:
  void on_pushButton_result_clicked();
  int xrise();
  void on_pushButton_ListRemove_clicked();
  void on_pushButton_ListAdd_clicked();
  void ok_add_clicked();
  void ok_sub_clicked();
  void find_start_finish_dates_deposit();
  void add_payments_to_out_list();
  void append_to_out_list(int type, QDate date, double adds_or_subs);
  void append_to_aos_list(int type, QDate date, double sum);
  void add_lasts_days_of_years_to_out_list();
  void add_aos_to_out_list();
  static bool rule_sort_out_by_date(const St_out &ti1, const St_out &ti2);
  void calc_out_list();

 private:
  Ui::depositCalc *ui;
  QList<St_out> *out;
  QList<St_aos> *aos;

  QTableWidget *add_table, *sub_table;
  QDate deposit_start, deposit_finish;
  QComboBox *type_add, *type_sub;
  QDateEdit *date_add, *date_sub;
  QLineEdit *sum_add, *sum_sub;
  QPushButton *ok_add, *ok_sub;
  QHBoxLayout *line_add, *line_sub;
  bool status_aos;
};

#endif  // DEPOSITCALC_H
