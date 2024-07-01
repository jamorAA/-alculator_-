#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  form = new Form;

  connect(this, &MainWindow::signal, form, &Form::slot);

  connect(ui->button_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->button_X, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_dev, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_mul, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_mod, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_pow, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->button_open_bracket, SIGNAL(clicked()), this, SLOT(brackets()));
  connect(ui->button_close_bracket, SIGNAL(clicked()), this, SLOT(brackets()));
  connect(ui->button_cos, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_sin, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_tan, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_acos, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_asin, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_atan, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_sqrt, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_ln, SIGNAL(clicked()), this, SLOT(functions()));
  connect(ui->button_log, SIGNAL(clicked()), this, SLOT(functions()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::digits_numbers() {
  QPushButton *button = (QPushButton *)sender();

  QString line = ui->line->text();
  if (line.length() >= 1 && line.at(line.length() - 1) == 'X')
    ;
  else if (line.length() >= 1 && (line.at(line.length() - 1) == 'f' ||
                                  line.at(line.length() - 1) == 'n'))
    ui->line->setText("" + button->text());
  else if (!(line.length() >= 1 && line.at(line.length() - 1) == ')'))
    ui->line->setText(line + button->text());
}

double MainWindow::get_token_last_index() {
  int lastPlusIndex = ui->line->text().lastIndexOf('+');
  int lastMinusIndex = ui->line->text().lastIndexOf('-');
  int lastMulIndex = ui->line->text().lastIndexOf('*');
  int lastDevIndex = ui->line->text().lastIndexOf('/');
  int lastModIndex = ui->line->text().lastIndexOf('d');
  int lastPowIndex = ui->line->text().lastIndexOf('^');
  int lastOpenBracketIndex = ui->line->text().lastIndexOf('(');
  int lastIndex =
      qMax(lastPlusIndex,
           qMax(lastMinusIndex,
                qMax(lastMulIndex,
                     qMax(lastDevIndex,
                          qMax(lastModIndex,
                               qMax(lastPowIndex, lastOpenBracketIndex))))));
  return lastIndex;
}

void MainWindow::on_button_dot_clicked() {
  int lastIndex = get_token_last_index();
  if (ui->line->text().length() >= 1 &&
      (ui->line->text().at(ui->line->text().length() - 1) == ')' ||
       ui->line->text().at(ui->line->text().length() - 1) == 'X')) {
    ;
  } else if (lastIndex == -1) {
    if (!(ui->line->text().contains('.')))
      ui->line->setText(ui->line->text() + ".");
  } else {
    if (!(ui->line->text().mid(lastIndex + 1).contains('.')))
      ui->line->setText(ui->line->text() + ".");
  }
}

void MainWindow::math_operations() {
  QPushButton *button = (QPushButton *)sender();

  QString digits = "0123456789.X";
  QString line = ui->line->text();
  if ((line == "" ||
       (line.length() >= 1 && line.at(line.length() - 1) == '(')) &&
      button->text() == '-')
    ui->line->setText(line + button->text());
  else if (line.length() >= 1 && (digits.contains(line.at(line.length() - 1)) ||
                                  line.at(line.length() - 1) == ')'))
    ui->line->setText(line + button->text());
}

void MainWindow::brackets() {
  QPushButton *button = (QPushButton *)sender();

  QString line = ui->line->text();
  QString operators = "+-*/d^(";
  int open_count = line.count('(');
  int close_count = line.count(')');
  if (button->text() == '(' &&
      (line == "" ||
       (line.length() >= 1 && operators.contains(line.at(line.length() - 1)))))
    ui->line->setText(line + button->text());
  else if (button->text() == ')' &&
           !operators.contains(line.at(line.length() - 1)) &&
           open_count > close_count)
    ui->line->setText(line + button->text());
}

void MainWindow::functions() {
  QPushButton *button = (QPushButton *)sender();

  QString line = ui->line->text();
  QString operators = "+-*/d^(";
  if (line == "" ||
      (line.length() >= 1 && operators.contains(line.at(line.length() - 1)))) {
    if (button->text() == "X")
      ui->line->setText(line + button->text());
    else
      ui->line->setText(line + button->text() + '(');
  }
}

void MainWindow::on_button_del_clicked() { ui->line->setText(""); }

void MainWindow::on_button_result_clicked() {
  QString line = ui->line->text();
  QString digits = "0123456789.X";
  int open_count = line.count('(');
  int close_count = line.count(')');
  if (line.length() >= 1 &&
      (line.at(line.length() - 1) == ')' ||
       digits.contains(line.at(line.length() - 1))) &&
      open_count == close_count) {
    QByteArray byteArray = line.toLatin1();
    char *in = byteArray.data();
    char out[TOKEN_LEN * 2];
    d_algorithm(in, out);
    double x = ui->X_SpinBox->value();
    double res = get_solution(out, x);
    QString res_str = QString::number(res, 'f', 7);
    ui->line->setText(res_str);
  }
}

void MainWindow::on_button_backspace_clicked() {
  QString line = ui->line->text();

  QString errors = "dfn";
  QString functions_4_end = "stn";
  QString functions_3_end = "sng";
  QString functions_3_begin = "cstl";
  if (line.length() >= 1 && errors.contains(line.at(line.length() - 1)))
    ui->line->setText(line.left(line.length() - 3));
  else if (line.length() >= 5 &&
           functions_4_end.contains(line.at(line.length() - 2)) &&
           (line.at(line.length() - 5) == 'a' ||
            line.at(line.length() - 5) == 's'))
    ui->line->setText(line.left(line.length() - 5));
  else if (line.length() >= 4 &&
           functions_3_end.contains(line.at(line.length() - 2)) &&
           functions_3_begin.contains(line.at(line.length() - 4)))
    ui->line->setText(line.left(line.length() - 4));
  else if (line.length() >= 2 && line.at(line.length() - 2) == 'n')
    ui->line->setText(line.left(line.length() - 3));
  else
    ui->line->setText(line.left(line.length() - 1));
}

void MainWindow::on_graphic_build_clicked() {
  QString line = ui->line->text();
  QString digits = "0123456789.X";
  int open_count = line.count('(');
  int close_count = line.count(')');
  if (line.length() >= 1 && line.count('X') >= 1 &&
      (line.at(line.length() - 1) == ')' ||
       digits.contains(line.at(line.length() - 1))) &&
      open_count == close_count) {
    emit signal(ui->line->text(), ui->x_min_SpinBox->value(),
                ui->x_max_SpinBox->value(), ui->y_min_SpinBox->value(),
                ui->y_max_SpinBox->value());
    form->show();
  }
}

void MainWindow::on_button_credit_calc_clicked() { creditcalc.show(); }

void MainWindow::on_button_deposit_calc_clicked() { depositcalc.show(); }
