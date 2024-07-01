#include "creditcalc.h"

#include "ui_creditcalc.h"

creditCalc::creditCalc(QWidget *parent)
    : QWidget(parent), ui(new Ui::creditCalc) {
  ui->setupUi(this);
}

creditCalc::~creditCalc() { delete ui; }

void creditCalc::on_button_calculate_clicked() {
  if (ui->radioButton_ann->isChecked() || ui->radioButton_diff->isChecked()) {
    double total_loan_amount = ui->spinBoxTotalCreditSum->value();
    double term = ui->spinBoxTerm->value();
    double interest_rate = ui->spinBoxInterestRate->value();
    double monthlyPaymentFirst, monthlyPaymentLast, loanOverpayment,
        totalPayout;
    if (ui->radioButton_ann->isChecked()) {
      annuity(total_loan_amount, term, interest_rate, &monthlyPaymentFirst,
              &loanOverpayment, &totalPayout);
      ui->label_monthly_payment->setText(
          QString::number(monthlyPaymentFirst, 'f', 2));
    } else {
      differentiated(total_loan_amount, term, interest_rate,
                     &monthlyPaymentFirst, &monthlyPaymentLast,
                     &loanOverpayment, &totalPayout);
      ui->label_monthly_payment->setText(
          QString::number(monthlyPaymentFirst, 'f', 2) + "..." +
          QString::number(monthlyPaymentLast, 'f', 2));
    }
    ui->label_overpayment->setText(QString::number(loanOverpayment, 'f', 2));
    ui->label_total_repayment->setText(QString::number(totalPayout, 'f', 2));
  }
}
