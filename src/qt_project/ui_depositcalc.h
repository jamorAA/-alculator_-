/********************************************************************************
** Form generated from reading UI file 'depositcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITCALC_H
#define UI_DEPOSITCALC_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositCalc {
 public:
  QGridLayout *gridLayout;
  QFormLayout *L1_add;
  QLabel *label_1;
  QSpinBox *spinBox_StartSum;
  QLabel *label_2;
  QHBoxLayout *horizontalLayout;
  QSpinBox *spinBox_Period;
  QComboBox *comboBox_Period;
  QLabel *label_3;
  QDateEdit *dateBox_Date;
  QLabel *label_4;
  QDoubleSpinBox *doubleSpinBox_Percent;
  QLabel *label_5;
  QDoubleSpinBox *doubleSpinBox_TaxRate;
  QLabel *label_6;
  QComboBox *comboBox_Frequency;
  QLabel *label_7;
  QCheckBox *checkBox_Cap;
  QLabel *label_8;
  QDoubleSpinBox *doubleSpinBox_RateCB;
  QLabel *label_9;
  QPushButton *pushButton_ListAdd;
  QPushButton *pushButton_result;
  QFormLayout *L_out;
  QLabel *label_11;
  QLabel *label_out_percents;
  QLabel *label_out_tax;
  QLabel *label_13;
  QLabel *label_out_sum;
  QLabel *label_12;
  QFormLayout *L2_sub;
  QLabel *label_10;
  QPushButton *pushButton_ListRemove;

  void setupUi(QWidget *depositCalc) {
    if (depositCalc->objectName().isEmpty())
      depositCalc->setObjectName(QString::fromUtf8("depositCalc"));
    depositCalc->resize(674, 446);
    depositCalc->setStyleSheet(
        QString::fromUtf8("depositCalc {\n"
                          "	background-color: rgb(51, 255, 102);\n"
                          "}"));
    gridLayout = new QGridLayout(depositCalc);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    L1_add = new QFormLayout();
    L1_add->setObjectName(QString::fromUtf8("L1_add"));
    label_1 = new QLabel(depositCalc);
    label_1->setObjectName(QString::fromUtf8("label_1"));
    QFont font;
    font.setPointSize(10);
    label_1->setFont(font);

    L1_add->setWidget(0, QFormLayout::LabelRole, label_1);

    spinBox_StartSum = new QSpinBox(depositCalc);
    spinBox_StartSum->setObjectName(QString::fromUtf8("spinBox_StartSum"));
    spinBox_StartSum->setMaximum(100000000);
    spinBox_StartSum->setSingleStep(10000);

    L1_add->setWidget(0, QFormLayout::FieldRole, spinBox_StartSum);

    label_2 = new QLabel(depositCalc);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setFont(font);

    L1_add->setWidget(1, QFormLayout::LabelRole, label_2);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    spinBox_Period = new QSpinBox(depositCalc);
    spinBox_Period->setObjectName(QString::fromUtf8("spinBox_Period"));
    spinBox_Period->setMaximum(20000);
    spinBox_Period->setSingleStep(1);

    horizontalLayout->addWidget(spinBox_Period);

    comboBox_Period = new QComboBox(depositCalc);
    comboBox_Period->addItem(QString());
    comboBox_Period->addItem(QString());
    comboBox_Period->addItem(QString());
    comboBox_Period->setObjectName(QString::fromUtf8("comboBox_Period"));

    horizontalLayout->addWidget(comboBox_Period);

    L1_add->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

    label_3 = new QLabel(depositCalc);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setFont(font);

    L1_add->setWidget(2, QFormLayout::LabelRole, label_3);

    dateBox_Date = new QDateEdit(depositCalc);
    dateBox_Date->setObjectName(QString::fromUtf8("dateBox_Date"));
    dateBox_Date->setDateTime(QDateTime(QDate(2022, 9, 5), QTime(0, 0, 0)));
    dateBox_Date->setCurrentSection(QDateTimeEdit::DaySection);
    dateBox_Date->setCalendarPopup(true);
    dateBox_Date->setDate(QDate(2022, 9, 5));

    L1_add->setWidget(2, QFormLayout::FieldRole, dateBox_Date);

    label_4 = new QLabel(depositCalc);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setFont(font);

    L1_add->setWidget(3, QFormLayout::LabelRole, label_4);

    doubleSpinBox_Percent = new QDoubleSpinBox(depositCalc);
    doubleSpinBox_Percent->setObjectName(
        QString::fromUtf8("doubleSpinBox_Percent"));
    doubleSpinBox_Percent->setMaximum(200.000000000000000);

    L1_add->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_Percent);

    label_5 = new QLabel(depositCalc);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setFont(font);

    L1_add->setWidget(4, QFormLayout::LabelRole, label_5);

    doubleSpinBox_TaxRate = new QDoubleSpinBox(depositCalc);
    doubleSpinBox_TaxRate->setObjectName(
        QString::fromUtf8("doubleSpinBox_TaxRate"));
    doubleSpinBox_TaxRate->setMaximum(200.000000000000000);
    doubleSpinBox_TaxRate->setValue(13.000000000000000);

    L1_add->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_TaxRate);

    label_6 = new QLabel(depositCalc);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setFont(font);

    L1_add->setWidget(5, QFormLayout::LabelRole, label_6);

    comboBox_Frequency = new QComboBox(depositCalc);
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->addItem(QString());
    comboBox_Frequency->setObjectName(QString::fromUtf8("comboBox_Frequency"));

    L1_add->setWidget(5, QFormLayout::FieldRole, comboBox_Frequency);

    label_7 = new QLabel(depositCalc);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setFont(font);

    L1_add->setWidget(6, QFormLayout::LabelRole, label_7);

    checkBox_Cap = new QCheckBox(depositCalc);
    checkBox_Cap->setObjectName(QString::fromUtf8("checkBox_Cap"));

    L1_add->setWidget(6, QFormLayout::FieldRole, checkBox_Cap);

    label_8 = new QLabel(depositCalc);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setFont(font);

    L1_add->setWidget(7, QFormLayout::LabelRole, label_8);

    doubleSpinBox_RateCB = new QDoubleSpinBox(depositCalc);
    doubleSpinBox_RateCB->setObjectName(
        QString::fromUtf8("doubleSpinBox_RateCB"));
    doubleSpinBox_RateCB->setMaximum(200.000000000000000);
    doubleSpinBox_RateCB->setValue(7.500000000000000);

    L1_add->setWidget(7, QFormLayout::FieldRole, doubleSpinBox_RateCB);

    label_9 = new QLabel(depositCalc);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setFont(font);

    L1_add->setWidget(8, QFormLayout::LabelRole, label_9);

    pushButton_ListAdd = new QPushButton(depositCalc);
    pushButton_ListAdd->setObjectName(QString::fromUtf8("pushButton_ListAdd"));

    L1_add->setWidget(8, QFormLayout::FieldRole, pushButton_ListAdd);

    gridLayout->addLayout(L1_add, 0, 0, 1, 1);

    pushButton_result = new QPushButton(depositCalc);
    pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
    QFont font1;
    font1.setPointSize(12);
    pushButton_result->setFont(font1);

    gridLayout->addWidget(pushButton_result, 2, 0, 1, 1);

    L_out = new QFormLayout();
    L_out->setObjectName(QString::fromUtf8("L_out"));
    label_11 = new QLabel(depositCalc);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setFont(font);

    L_out->setWidget(0, QFormLayout::LabelRole, label_11);

    label_out_percents = new QLabel(depositCalc);
    label_out_percents->setObjectName(QString::fromUtf8("label_out_percents"));
    label_out_percents->setFont(font);

    L_out->setWidget(0, QFormLayout::FieldRole, label_out_percents);

    label_out_tax = new QLabel(depositCalc);
    label_out_tax->setObjectName(QString::fromUtf8("label_out_tax"));
    label_out_tax->setFont(font);

    L_out->setWidget(1, QFormLayout::FieldRole, label_out_tax);

    label_13 = new QLabel(depositCalc);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setFont(font);

    L_out->setWidget(2, QFormLayout::LabelRole, label_13);

    label_out_sum = new QLabel(depositCalc);
    label_out_sum->setObjectName(QString::fromUtf8("label_out_sum"));
    label_out_sum->setFont(font);

    L_out->setWidget(2, QFormLayout::FieldRole, label_out_sum);

    label_12 = new QLabel(depositCalc);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setFont(font);

    L_out->setWidget(1, QFormLayout::LabelRole, label_12);

    gridLayout->addLayout(L_out, 3, 0, 1, 1);

    L2_sub = new QFormLayout();
    L2_sub->setObjectName(QString::fromUtf8("L2_sub"));
    label_10 = new QLabel(depositCalc);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setFont(font);

    L2_sub->setWidget(0, QFormLayout::LabelRole, label_10);

    pushButton_ListRemove = new QPushButton(depositCalc);
    pushButton_ListRemove->setObjectName(
        QString::fromUtf8("pushButton_ListRemove"));

    L2_sub->setWidget(0, QFormLayout::FieldRole, pushButton_ListRemove);

    gridLayout->addLayout(L2_sub, 1, 0, 1, 1);

    retranslateUi(depositCalc);

    QMetaObject::connectSlotsByName(depositCalc);
  }  // setupUi

  void retranslateUi(QWidget *depositCalc) {
    depositCalc->setWindowTitle(QCoreApplication::translate(
        "depositCalc", "deposit calculator", nullptr));
    label_1->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\262\320\272\320\273\320\260\320\264\320\260",
        nullptr));
    label_2->setText(
        QCoreApplication::translate("depositCalc",
                                    "C\321\200\320\276\320\272 "
                                    "\321\200\320\260\320\267\320\274\320\265"
                                    "\321\211\320\265\320\275\320\270\321\217",
                                    nullptr));
    comboBox_Period->setItemText(
        0, QCoreApplication::translate(
               "depositCalc", "\320\264\320\275\320\265\320\271", nullptr));
    comboBox_Period->setItemText(
        1, QCoreApplication::translate(
               "depositCalc",
               "\320\274\320\265\321\201\321\217\321\206\320\265\320\262",
               nullptr));
    comboBox_Period->setItemText(
        2, QCoreApplication::translate("depositCalc",
                                       "\320\273\320\265\321\202", nullptr));

    comboBox_Period->setCurrentText(QCoreApplication::translate(
        "depositCalc", "\320\264\320\275\320\265\320\271", nullptr));
    label_3->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\235\320\260\321\207\320\260\320\273\320\276 "
        "\321\201\321\200\320\276\320\272\320\260",
        nullptr));
    dateBox_Date->setDisplayFormat(
        QCoreApplication::translate("depositCalc", "d/M/yy", nullptr));
    label_4->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320"
        "\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260",
        nullptr));
    label_5->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321"
        "\217 \321\201\321\202\320\260\320\262\320\272\320\260",
        nullptr));
    label_6->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320"
        "\275\320\276\321\201\321\202\321\214 "
        "\320\262\321\213\320\277\320\273\320\260\321\202",
        nullptr));
    comboBox_Frequency->setItemText(
        0,
        QCoreApplication::translate("depositCalc",
                                    "\320\272\320\260\320\266\320\264\321\213"
                                    "\320\271 \320\264\320\265\320\275\321\214",
                                    nullptr));
    comboBox_Frequency->setItemText(
        1, QCoreApplication::translate(
               "depositCalc",
               "\320\272\320\260\320\266\320\264\321\203\321\216 "
               "\320\275\320\265\320\264\320\265\320\273\321\216",
               nullptr));
    comboBox_Frequency->setItemText(
        2,
        QCoreApplication::translate("depositCalc",
                                    "\321\200\320\260\320\267 \320\262 "
                                    "\320\274\320\265\321\201\321\217\321\206",
                                    nullptr));
    comboBox_Frequency->setItemText(
        3, QCoreApplication::translate(
               "depositCalc",
               "\321\200\320\260\320\267 \320\262 "
               "\320\272\320\262\320\260\321\200\321\202\320\260\320\273",
               nullptr));
    comboBox_Frequency->setItemText(
        4, QCoreApplication::translate(
               "depositCalc",
               "\321\200\320\260\320\267 \320\262 "
               "\320\277\320\276\320\273\320\263\320\276\320\264\320\260",
               nullptr));
    comboBox_Frequency->setItemText(
        5, QCoreApplication::translate(
               "depositCalc",
               "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264",
               nullptr));
    comboBox_Frequency->setItemText(
        6, QCoreApplication::translate(
               "depositCalc",
               "\320\262 \320\272\320\276\320\275\321\206\320\265 "
               "\321\201\321\200\320\276\320\272\320\260",
               nullptr));

    comboBox_Frequency->setCurrentText(
        QCoreApplication::translate("depositCalc",
                                    "\320\272\320\260\320\266\320\264\321\213"
                                    "\320\271 \320\264\320\265\320\275\321\214",
                                    nullptr));
    label_7->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320"
        "\267\320\260\321\206\320\270\321\217 "
        "\320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320"
        "\262",
        nullptr));
    checkBox_Cap->setText(QString());
    label_8->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\232\320\273\321\216\321\207\320\265\320\262\320\260\321\217 "
        "\321\201\321\202\320\260\320\262\320\272\320\260 \320\246\320\221",
        nullptr));
    label_9->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\241\320\277\320\270\321\201\320\276\320\272 "
        "\320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320"
        "\270\320\271",
        nullptr));
    pushButton_ListAdd->setText(
        QCoreApplication::translate("depositCalc", "+", nullptr));
    pushButton_result->setText(
        QCoreApplication::translate("depositCalc",
                                    "\320\240\320\260\321\201\321\201\321\207"
                                    "\320\270\321\202\320\260\321\202\321\214",
                                    nullptr));
    label_11->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320"
        "\275\321\213\320\265 "
        "\320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213",
        nullptr));
    label_out_percents->setText(
        QCoreApplication::translate("depositCalc", "-", nullptr));
    label_out_tax->setText(
        QCoreApplication::translate("depositCalc", "-", nullptr));
    label_13->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 "
        "\320\262\320\272\320\273\320\260\320\264\320\265 \320\272 "
        "\320\272\320\276\320\275\321\206\321\203 "
        "\321\201\321\200\320\276\320\272\320\260",
        nullptr));
    label_out_sum->setText(
        QCoreApplication::translate("depositCalc", "-", nullptr));
    label_12->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\275\320\260\320\273\320\276\320\263\320\260",
        nullptr));
    label_10->setText(QCoreApplication::translate(
        "depositCalc",
        "\320\241\320\277\320\270\321\201\320\276\320\272 "
        "\321\207\320\260\321\201\321\202\320\270\321\207\320\275\321\213\321"
        "\205 \321\201\320\275\321\217\321\202\320\270\320\271  ",
        nullptr));
    pushButton_ListRemove->setText(
        QCoreApplication::translate("depositCalc", "+", nullptr));
  }  // retranslateUi
};

namespace Ui {
class depositCalc : public Ui_depositCalc {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DEPOSITCALC_H
