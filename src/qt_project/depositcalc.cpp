#include "depositcalc.h"

#include "ui_depositcalc.h"

depositCalc::depositCalc(QWidget *parent)
    : QWidget(parent), ui(new Ui::depositCalc) {
  ui->setupUi(this);
  status_aos = 0;
  aos = new QList<St_aos>;
  out = new QList<St_out>;
  ui->dateBox_Date->setDate(QDate::currentDate());
}

depositCalc::~depositCalc() {
  delete aos;
  delete out;
  delete add_table;
  delete sub_table;
  delete ui;
}

void depositCalc::on_pushButton_result_clicked() {
  out->clear();
  // нахождение дат начала и окончания депозита
  find_start_finish_dates_deposit();
  // включение в список даты начала депозита
  append_to_out_list(1, deposit_start, ui->spinBox_StartSum->value());
  // включение в список даты окончания депозита
  append_to_out_list(5, deposit_finish, 0);
  // включение в список дат выплат процентов
  add_payments_to_out_list();
  // включение в список последних дней годов
  add_lasts_days_of_years_to_out_list();
  // включение в список дат пополнений и снятий
  add_aos_to_out_list();
  // сортировка списка out по датам
  std::sort(out->begin(), out->end(), rule_sort_out_by_date);
  // вычисление списка out
  calc_out_list();
}

void depositCalc::on_pushButton_ListAdd_clicked() {
  ui->pushButton_ListAdd->hide();
  type_add = new QComboBox(this);
  type_add->addItem("Разовое");
  type_add->addItem("Раз в месяц");
  type_add->addItem("Раз в 2 месяца");
  type_add->addItem("Раз в квартал");
  type_add->addItem("Раз в полгода");
  type_add->addItem("Раз в год");

  date_add = new QDateEdit(this);
  date_add->setDate(QDate::currentDate());

  sum_add = new QLineEdit(this);
  sum_add->setPlaceholderText("Сумма, руб.");

  ok_add = new QPushButton("Добавить", this);
  ok_add->setMaximumWidth(80);

  line_add = new QHBoxLayout();
  line_add->addWidget(type_add);
  line_add->addWidget(date_add);
  line_add->addWidget(sum_add);
  line_add->addWidget(ok_add);

  ui->L1_add->addRow(line_add);
  connect(ok_add, SIGNAL(clicked()), this, SLOT(ok_add_clicked()));
  add_table = new QTableWidget(this);
  add_table->setColumnCount(3);
  ui->L1_add->addRow(add_table);
}

void depositCalc::on_pushButton_ListRemove_clicked() {
  ui->pushButton_ListRemove->hide();
  type_sub = new QComboBox(this);
  type_sub->addItem("Разовое");
  type_sub->addItem("Раз в месяц");
  type_sub->addItem("Раз в 2 месяца");
  type_sub->addItem("Раз в квартал");
  type_sub->addItem("Раз в полгода");
  type_sub->addItem("Раз в год");

  date_sub = new QDateEdit(this);
  date_sub->setDate(QDate::currentDate());

  sum_sub = new QLineEdit(this);
  sum_sub->setPlaceholderText("Сумма, руб.");

  ok_sub = new QPushButton("Добавить", this);
  ok_sub->setMaximumWidth(80);

  line_sub = new QHBoxLayout();
  line_sub->addWidget(type_sub);
  line_sub->addWidget(date_sub);
  line_sub->addWidget(sum_sub);
  line_sub->addWidget(ok_sub);

  ui->L2_sub->addRow(line_sub);
  connect(ok_sub, SIGNAL(clicked()), this, SLOT(ok_sub_clicked()));

  sub_table = new QTableWidget(this);
  ui->L2_sub->addRow(sub_table);
  sub_table->setColumnCount(3);
}

void depositCalc::ok_add_clicked() {
  if (sum_add->text().toDouble() > 0) {
    status_aos = 1;
    append_to_aos_list(type_add->currentIndex(), date_add->date(),
                       sum_add->text().toDouble());
    int temp_index = (*aos).size() - 1;

    sum_add->setStyleSheet("background-color: rgb(255, 255, 255)");
    depositCalc::add_table->insertRow(add_table->rowCount());
    add_table->setItem(add_table->rowCount() - 1, 0,
                       new QTableWidgetItem(type_add->currentText()));
    add_table->setItem(
        add_table->rowCount() - 1, 1,
        new QTableWidgetItem((*aos)[temp_index].date.toString("dd.MM.yyyy")));
    add_table->setItem(
        add_table->rowCount() - 1, 2,
        new QTableWidgetItem(tr("%1").arg((*aos)[temp_index].sum, 0, 'f', 2)));
    sum_add->setText("");
  } else {
    sum_add->setStyleSheet("background-color: rgb(246, 97, 81)");
  }
}

void depositCalc::ok_sub_clicked() {
  if (sum_sub->text().toDouble() > 0) {
    status_aos = 1;
    append_to_aos_list(type_sub->currentIndex(), date_sub->date(),
                       -(sum_sub->text().toDouble()));
    sum_sub->setStyleSheet("background-color: rgb(255, 255, 255)");
    depositCalc::sub_table->insertRow(sub_table->rowCount());
    sub_table->setItem(sub_table->rowCount() - 1, 0,
                       new QTableWidgetItem(type_sub->currentText()));
    sub_table->setItem(
        sub_table->rowCount() - 1, 1,
        new QTableWidgetItem(date_sub->date().toString("dd.MM.yyyy")));
    sub_table->setItem(sub_table->rowCount() - 1, 2,
                       new QTableWidgetItem(tr("%1").arg(
                           sum_sub->text().toDouble(), 0, 'f', 2)));
    sum_sub->setText("");
  } else {
    sum_sub->setStyleSheet("background-color: rgb(246, 97, 81)");
  }
}

void depositCalc::find_start_finish_dates_deposit() {
  // дата начала вклада
  deposit_start = ui->dateBox_Date->date();
  // дата окончания вклада
  if (ui->comboBox_Period->currentIndex() == 0) {
    deposit_finish = deposit_start.addDays(ui->spinBox_Period->value());
  } else if (ui->comboBox_Period->currentIndex() == 1) {
    deposit_finish = deposit_start.addMonths(ui->spinBox_Period->value());
  } else if (ui->comboBox_Period->currentIndex() == 2) {
    deposit_finish = deposit_start.addYears(ui->spinBox_Period->value());
  }
}

int depositCalc::xrise() {
  int xrise_type_period = 1;
  switch (ui->comboBox_Frequency->currentIndex()) {
    case 1:
      xrise_type_period = 7;
      break;
    case 3:
      xrise_type_period = 3;
      break;
    case 4:
      xrise_type_period = 6;
      break;
    case 5:
      xrise_type_period = 12;
      break;
    case 6:
      xrise_type_period = 0;
      break;
    default:
      break;
  }
  return xrise_type_period;
}

void depositCalc::add_payments_to_out_list() {
  int xrise_type_period = xrise();
  if (ui->comboBox_Frequency->currentIndex() < 2 && xrise_type_period) {
    for (int i = 1;
         deposit_start.addDays(i * xrise_type_period) < deposit_finish; i++) {
      append_to_out_list(2, deposit_start.addDays(i * xrise_type_period), 0);
    }
  } else if (ui->comboBox_Frequency->currentIndex() >= 2 && xrise_type_period) {
    for (int i = 1;
         deposit_start.addMonths(i * xrise_type_period) < deposit_finish; i++) {
      append_to_out_list(2, deposit_start.addMonths(i * xrise_type_period), 0);
    }
  }
}

void depositCalc::append_to_out_list(int type, QDate date,
                                     double adds_or_subs) {
  St_out temp_struct;
  out->append(temp_struct);
  int temp_index = (*out).size() - 1;
  (*out)[temp_index].type = type;
  (*out)[temp_index].date = date;
  (*out)[temp_index].adds_or_subs = adds_or_subs;
}

void depositCalc::append_to_aos_list(int type, QDate date, double sum) {
  St_aos temp_struct;
  aos->append(temp_struct);
  int temp_index = (*aos).size() - 1;
  (*aos)[temp_index].type = type;
  (*aos)[temp_index].date = date;
  (*aos)[temp_index].sum = sum;
}

void depositCalc::add_lasts_days_of_years_to_out_list() {
  QDate last_day_of_year = QDate(deposit_start.year(), 12, 31);
  if (last_day_of_year < deposit_finish) {
    for (int i = 0; deposit_start.addYears(i) < deposit_finish; i++) {
      append_to_out_list(4, last_day_of_year.addYears(i), 0);
    }
  }
}

void depositCalc::add_aos_to_out_list() {
  if (status_aos) {
    int xrise = 0;
    St_aos line;
    for (int i = 0; i < aos->size(); i++) {
      line = (*aos)[i];
      switch (line.type) {
        case 1:
          xrise = 1;
          break;
        case 2:
          xrise = 2;
          break;
        case 3:
          xrise = 3;
          break;
        case 4:
          xrise = 6;
          break;
        case 5:
          xrise = 12;
          break;
        default:
          break;
      }
      QDate date = line.date;
      if (xrise) {
        for (int i = 0; line.date.addMonths(i * xrise) < deposit_finish; i++) {
          date = line.date.addMonths(i * xrise);
          if (date > deposit_start) {
            append_to_out_list(3, date, line.sum);
          }
        }
      } else {
        if (date > deposit_start && date < deposit_finish) {
          append_to_out_list(3, date, line.sum);
        }
      }
    }
  }
}

bool depositCalc::rule_sort_out_by_date(const St_out &ti1, const St_out &ti2) {
  bool ret;
  if (ti1.date == ti2.date) {
    ret = ti1.type < ti2.type;
  } else {
    ret = ti1.date < ti2.date;
  }
  return ret;
}

void depositCalc::calc_out_list() {
  int days_lenght = 0;
  double percents = 0, all_percents = 0, balance = 0,
         tax_rate = ui->doubleSpinBox_TaxRate->value(), tax_total = 0,
         percents_by_year = 0,
         no_tax_sum = 1000000 * ui->doubleSpinBox_RateCB->value() / 100;
  QDate current_date, last_date = deposit_start;
  double interest_rate = ui->doubleSpinBox_Percent->value();
  St_out *line;
  for (int i = 0; i < out->size(); i++) {
    line = &(*out)[i];
    // текущая дата в рассчитываемой строке
    current_date = line->date;
    // количество дней между датой в предыдущей строке и текущей датой
    days_lenght = last_date.daysTo(current_date);
    // начисленные проценты в срок от даты в предыдущей строке до текщей даты
    percents +=
        balance * interest_rate / current_date.daysInYear() * days_lenght / 100;
    if (line->type == 2 || line->type == 5) {
      percents = round(percents * 100) / 100;
      line->perc = percents;
      if (ui->checkBox_Cap->isChecked()) {
        line->adds_or_subs += percents;
      }
      percents_by_year += percents;
      all_percents += percents;
      percents = 0;
    }
    balance += line->adds_or_subs;
    line->balance = balance;
    last_date = line->date;
    if (current_date.month() == 12 && current_date.day() == 31) {
      if (percents_by_year - no_tax_sum > 0)
        tax_total += (percents_by_year - no_tax_sum) * tax_rate / 100;
      percents_by_year = 0;
    }
  }
  if (percents_by_year - no_tax_sum > 0) {
    tax_total += (percents_by_year - no_tax_sum) * tax_rate / 100;
  }
  ui->label_out_sum->setText(tr("%1").arg(balance, 0, 'f', 2));
  ui->label_out_percents->setText(tr("%1").arg(all_percents, 0, 'f', 2));
  ui->label_out_tax->setText(tr("%1").arg(tax_total, 0, 'f', 2));
}
