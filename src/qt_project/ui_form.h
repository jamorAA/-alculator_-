/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Form {
 public:
  QGridLayout *gridLayout;
  QCustomPlot *widget;

  void setupUi(QWidget *Form) {
    if (Form->objectName().isEmpty())
      Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(388, 363);
    gridLayout = new QGridLayout(Form);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    widget = new QCustomPlot(Form);
    widget->setObjectName(QString::fromUtf8("widget"));

    gridLayout->addWidget(widget, 0, 0, 1, 1);

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
  }  // setupUi

  void retranslateUi(QWidget *Form) {
    Form->setWindowTitle(
        QCoreApplication::translate("Form", "Graphic", nullptr));
  }  // retranslateUi
};

namespace Ui {
class Form : public Ui_Form {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_FORM_H
