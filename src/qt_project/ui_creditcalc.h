/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditCalc {
 public:
  QSpinBox *spinBoxTotalCreditSum;
  QRadioButton *radioButton_ann;
  QRadioButton *radioButton_diff;
  QSpinBox *spinBoxTerm;
  QSpinBox *spinBoxInterestRate;
  QLabel *label_1;
  QLabel *label_2;
  QLabel *label_3;
  QLabel *label_4;
  QLabel *label_5;
  QLabel *label_6;
  QLabel *label_7;
  QLabel *label_monthly_payment;
  QLabel *label_overpayment;
  QLabel *label_total_repayment;
  QPushButton *button_calculate;

  void setupUi(QWidget *creditCalc) {
    if (creditCalc->objectName().isEmpty())
      creditCalc->setObjectName(QString::fromUtf8("creditCalc"));
    creditCalc->resize(629, 338);
    creditCalc->setStyleSheet(
        QString::fromUtf8("creditCalc {\n"
                          "	background-color: rgb(51, 255, 102);\n"
                          "}"));
    spinBoxTotalCreditSum = new QSpinBox(creditCalc);
    spinBoxTotalCreditSum->setObjectName(
        QString::fromUtf8("spinBoxTotalCreditSum"));
    spinBoxTotalCreditSum->setGeometry(QRect(167, 86, 81, 22));
    spinBoxTotalCreditSum->setMaximum(100000000);
    spinBoxTotalCreditSum->setSingleStep(10000);
    radioButton_ann = new QRadioButton(creditCalc);
    radioButton_ann->setObjectName(QString::fromUtf8("radioButton_ann"));
    radioButton_ann->setGeometry(QRect(20, 210, 145, 33));
    QFont font;
    font.setPointSize(14);
    font.setBold(true);
    radioButton_ann->setFont(font);
    radioButton_diff = new QRadioButton(creditCalc);
    radioButton_diff->setObjectName(QString::fromUtf8("radioButton_diff"));
    radioButton_diff->setGeometry(QRect(150, 210, 145, 33));
    radioButton_diff->setFont(font);
    spinBoxTerm = new QSpinBox(creditCalc);
    spinBoxTerm->setObjectName(QString::fromUtf8("spinBoxTerm"));
    spinBoxTerm->setGeometry(QRect(167, 116, 81, 22));
    spinBoxTerm->setMaximum(600);
    spinBoxTerm->setSingleStep(1);
    spinBoxInterestRate = new QSpinBox(creditCalc);
    spinBoxInterestRate->setObjectName(
        QString::fromUtf8("spinBoxInterestRate"));
    spinBoxInterestRate->setGeometry(QRect(167, 146, 81, 22));
    spinBoxInterestRate->setMaximum(99);
    spinBoxInterestRate->setSingleStep(1);
    label_1 = new QLabel(creditCalc);
    label_1->setObjectName(QString::fromUtf8("label_1"));
    label_1->setGeometry(QRect(20, 80, 151, 31));
    QFont font1;
    font1.setPointSize(12);
    font1.setBold(true);
    label_1->setFont(font1);
    label_2 = new QLabel(creditCalc);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(52, 110, 121, 31));
    label_2->setFont(font1);
    label_3 = new QLabel(creditCalc);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(38, 140, 141, 31));
    label_3->setFont(font1);
    label_4 = new QLabel(creditCalc);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(90, 180, 101, 31));
    label_4->setFont(font1);
    label_5 = new QLabel(creditCalc);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(319, 80, 151, 31));
    label_5->setFont(font1);
    label_6 = new QLabel(creditCalc);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(261, 110, 201, 31));
    label_6->setFont(font1);
    label_7 = new QLabel(creditCalc);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(331, 140, 141, 31));
    label_7->setFont(font1);
    label_monthly_payment = new QLabel(creditCalc);
    label_monthly_payment->setObjectName(
        QString::fromUtf8("label_monthly_payment"));
    label_monthly_payment->setGeometry(QRect(464, 80, 160, 31));
    label_monthly_payment->setFont(font1);
    label_overpayment = new QLabel(creditCalc);
    label_overpayment->setObjectName(QString::fromUtf8("label_overpayment"));
    label_overpayment->setGeometry(QRect(464, 110, 160, 31));
    label_overpayment->setFont(font1);
    label_total_repayment = new QLabel(creditCalc);
    label_total_repayment->setObjectName(
        QString::fromUtf8("label_total_repayment"));
    label_total_repayment->setGeometry(QRect(464, 140, 160, 31));
    label_total_repayment->setFont(font1);
    button_calculate = new QPushButton(creditCalc);
    button_calculate->setObjectName(QString::fromUtf8("button_calculate"));
    button_calculate->setGeometry(QRect(60, 260, 161, 61));
    QFont font2;
    font2.setPointSize(14);
    button_calculate->setFont(font2);

    retranslateUi(creditCalc);

    QMetaObject::connectSlotsByName(creditCalc);
  }  // setupUi

  void retranslateUi(QWidget *creditCalc) {
    creditCalc->setWindowTitle(QCoreApplication::translate(
        "creditCalc", "credit calculator", nullptr));
    radioButton_ann->setText(
        QCoreApplication::translate("creditCalc", "annuity", nullptr));
    radioButton_diff->setText(
        QCoreApplication::translate("creditCalc", "differentiated", nullptr));
    label_1->setText(QCoreApplication::translate(
        "creditCalc", "Total loan amount:", nullptr));
    label_2->setText(
        QCoreApplication::translate("creditCalc", "Term(months):", nullptr));
    label_3->setText(QCoreApplication::translate("creditCalc",
                                                 "Interest Rate(%):", nullptr));
    label_4->setText(
        QCoreApplication::translate("creditCalc", "Credit type:", nullptr));
    label_5->setText(
        QCoreApplication::translate("creditCalc", "Monthly payment:", nullptr));
    label_6->setText(QCoreApplication::translate(
        "creditCalc", "Overpayment on the loan:", nullptr));
    label_7->setText(
        QCoreApplication::translate("creditCalc", "Total repayment:", nullptr));
    label_monthly_payment->setText(QString());
    label_overpayment->setText(QString());
    label_total_repayment->setText(QString());
    button_calculate->setText(
        QCoreApplication::translate("creditCalc", "calculate", nullptr));
  }  // retranslateUi
};

namespace Ui {
class creditCalc : public Ui_creditCalc {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_CREDITCALC_H
