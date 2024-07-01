/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QLabel *line;
  QPushButton *button_del;
  QPushButton *button_pow;
  QPushButton *button_mod;
  QPushButton *button_dev;
  QPushButton *button_7;
  QPushButton *button_8;
  QPushButton *button_9;
  QPushButton *button_mul;
  QPushButton *button_4;
  QPushButton *button_1;
  QPushButton *button_minus;
  QPushButton *button_6;
  QPushButton *button_5;
  QPushButton *button_result;
  QPushButton *button_dot;
  QPushButton *button_0;
  QPushButton *button_plus;
  QPushButton *button_3;
  QPushButton *button_2;
  QPushButton *button_open_bracket;
  QPushButton *button_close_bracket;
  QPushButton *button_cos;
  QPushButton *button_tan;
  QPushButton *button_sqrt;
  QPushButton *button_asin;
  QPushButton *button_ln;
  QPushButton *button_sin;
  QPushButton *button_acos;
  QPushButton *button_atan;
  QPushButton *button_log;
  QPushButton *button_X;
  QPushButton *button_backspace;
  QPushButton *button_credit_calc;
  QPushButton *button_deposit_calc;
  QWidget *widget;
  QVBoxLayout *verticalLayout_2;
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout;
  QLabel *label_x_max;
  QDoubleSpinBox *x_max_SpinBox;
  QHBoxLayout *horizontalLayout_2;
  QLabel *label_y_max;
  QDoubleSpinBox *y_max_SpinBox;
  QHBoxLayout *horizontalLayout_3;
  QLabel *label_x_min;
  QDoubleSpinBox *x_min_SpinBox;
  QHBoxLayout *horizontalLayout_4;
  QLabel *label_y_min;
  QDoubleSpinBox *y_min_SpinBox;
  QHBoxLayout *horizontalLayout_5;
  QLabel *label_X;
  QDoubleSpinBox *X_SpinBox;
  QPushButton *graphic_build;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(777, 372);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    line = new QLabel(centralwidget);
    line->setObjectName(QString::fromUtf8("line"));
    line->setGeometry(QRect(0, 0, 772, 61));
    QFont font;
    font.setPointSize(20);
    line->setFont(font);
    line->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "	border-bottom: 1px solid gray;\n"
        "}\n"
        "\n"
        "background-color : white;"));
    button_del = new QPushButton(centralwidget);
    button_del->setObjectName(QString::fromUtf8("button_del"));
    button_del->setGeometry(QRect(1, 62, 61, 61));
    button_del->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_pow = new QPushButton(centralwidget);
    button_pow->setObjectName(QString::fromUtf8("button_pow"));
    button_pow->setGeometry(QRect(373, 186, 61, 61));
    button_pow->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_mod = new QPushButton(centralwidget);
    button_mod->setObjectName(QString::fromUtf8("button_mod"));
    button_mod->setGeometry(QRect(373, 248, 61, 61));
    button_mod->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_dev = new QPushButton(centralwidget);
    button_dev->setObjectName(QString::fromUtf8("button_dev"));
    button_dev->setGeometry(QRect(311, 62, 61, 61));
    button_dev->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_7 = new QPushButton(centralwidget);
    button_7->setObjectName(QString::fromUtf8("button_7"));
    button_7->setGeometry(QRect(1, 124, 61, 61));
    button_7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_8 = new QPushButton(centralwidget);
    button_8->setObjectName(QString::fromUtf8("button_8"));
    button_8->setGeometry(QRect(63, 124, 61, 61));
    button_8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_9 = new QPushButton(centralwidget);
    button_9->setObjectName(QString::fromUtf8("button_9"));
    button_9->setGeometry(QRect(125, 124, 61, 61));
    button_9->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_mul = new QPushButton(centralwidget);
    button_mul->setObjectName(QString::fromUtf8("button_mul"));
    button_mul->setGeometry(QRect(311, 124, 61, 61));
    button_mul->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_4 = new QPushButton(centralwidget);
    button_4->setObjectName(QString::fromUtf8("button_4"));
    button_4->setGeometry(QRect(1, 186, 61, 61));
    button_4->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_1 = new QPushButton(centralwidget);
    button_1->setObjectName(QString::fromUtf8("button_1"));
    button_1->setGeometry(QRect(1, 248, 61, 61));
    button_1->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_minus = new QPushButton(centralwidget);
    button_minus->setObjectName(QString::fromUtf8("button_minus"));
    button_minus->setGeometry(QRect(311, 186, 61, 61));
    button_minus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_6 = new QPushButton(centralwidget);
    button_6->setObjectName(QString::fromUtf8("button_6"));
    button_6->setGeometry(QRect(125, 186, 61, 61));
    button_6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_5 = new QPushButton(centralwidget);
    button_5->setObjectName(QString::fromUtf8("button_5"));
    button_5->setGeometry(QRect(63, 186, 61, 61));
    button_5->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_result = new QPushButton(centralwidget);
    button_result->setObjectName(QString::fromUtf8("button_result"));
    button_result->setGeometry(QRect(311, 310, 123, 61));
    button_result->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(0, 0, 255);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_dot = new QPushButton(centralwidget);
    button_dot->setObjectName(QString::fromUtf8("button_dot"));
    button_dot->setGeometry(QRect(125, 310, 61, 61));
    button_dot->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_0 = new QPushButton(centralwidget);
    button_0->setObjectName(QString::fromUtf8("button_0"));
    button_0->setGeometry(QRect(1, 310, 123, 61));
    button_0->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_plus = new QPushButton(centralwidget);
    button_plus->setObjectName(QString::fromUtf8("button_plus"));
    button_plus->setGeometry(QRect(311, 248, 61, 61));
    button_plus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: white;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
        "\n"
        "								"
        "		stop: 0 #FF7832, stop: 1 #FF9739);\n"
        "}"));
    button_3 = new QPushButton(centralwidget);
    button_3->setObjectName(QString::fromUtf8("button_3"));
    button_3->setGeometry(QRect(125, 248, 61, 61));
    button_3->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_2 = new QPushButton(centralwidget);
    button_2->setObjectName(QString::fromUtf8("button_2"));
    button_2->setGeometry(QRect(63, 248, 61, 61));
    button_2->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    button_open_bracket = new QPushButton(centralwidget);
    button_open_bracket->setObjectName(
        QString::fromUtf8("button_open_bracket"));
    button_open_bracket->setGeometry(QRect(63, 62, 61, 61));
    button_open_bracket->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_close_bracket = new QPushButton(centralwidget);
    button_close_bracket->setObjectName(
        QString::fromUtf8("button_close_bracket"));
    button_close_bracket->setGeometry(QRect(125, 62, 61, 61));
    button_close_bracket->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_cos = new QPushButton(centralwidget);
    button_cos->setObjectName(QString::fromUtf8("button_cos"));
    button_cos->setGeometry(QRect(187, 124, 61, 61));
    button_cos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_tan = new QPushButton(centralwidget);
    button_tan->setObjectName(QString::fromUtf8("button_tan"));
    button_tan->setGeometry(QRect(187, 186, 61, 61));
    button_tan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_sqrt = new QPushButton(centralwidget);
    button_sqrt->setObjectName(QString::fromUtf8("button_sqrt"));
    button_sqrt->setGeometry(QRect(249, 62, 61, 61));
    button_sqrt->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_asin = new QPushButton(centralwidget);
    button_asin->setObjectName(QString::fromUtf8("button_asin"));
    button_asin->setGeometry(QRect(187, 248, 61, 61));
    button_asin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_ln = new QPushButton(centralwidget);
    button_ln->setObjectName(QString::fromUtf8("button_ln"));
    button_ln->setGeometry(QRect(187, 310, 61, 61));
    button_ln->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_sin = new QPushButton(centralwidget);
    button_sin->setObjectName(QString::fromUtf8("button_sin"));
    button_sin->setGeometry(QRect(249, 124, 61, 61));
    button_sin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_acos = new QPushButton(centralwidget);
    button_acos->setObjectName(QString::fromUtf8("button_acos"));
    button_acos->setGeometry(QRect(249, 186, 61, 61));
    button_acos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_atan = new QPushButton(centralwidget);
    button_atan->setObjectName(QString::fromUtf8("button_atan"));
    button_atan->setGeometry(QRect(249, 248, 61, 61));
    button_atan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_log = new QPushButton(centralwidget);
    button_log->setObjectName(QString::fromUtf8("button_log"));
    button_log->setGeometry(QRect(249, 310, 61, 61));
    button_log->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_X = new QPushButton(centralwidget);
    button_X->setObjectName(QString::fromUtf8("button_X"));
    button_X->setGeometry(QRect(187, 62, 61, 61));
    button_X->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_backspace = new QPushButton(centralwidget);
    button_backspace->setObjectName(QString::fromUtf8("button_backspace"));
    button_backspace->setGeometry(QRect(373, 62, 61, 123));
    QFont font1;
    font1.setPointSize(10);
    button_backspace->setFont(font1);
    button_backspace->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_credit_calc = new QPushButton(centralwidget);
    button_credit_calc->setObjectName(QString::fromUtf8("button_credit_calc"));
    button_credit_calc->setGeometry(QRect(435, 62, 170, 61));
    QFont font2;
    font2.setPointSize(11);
    button_credit_calc->setFont(font2);
    button_credit_calc->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(51, 255, 102);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    button_deposit_calc = new QPushButton(centralwidget);
    button_deposit_calc->setObjectName(
        QString::fromUtf8("button_deposit_calc"));
    button_deposit_calc->setGeometry(QRect(606, 62, 170, 61));
    button_deposit_calc->setFont(font2);
    button_deposit_calc->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(51, 255, 102);\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
        "}"));
    widget = new QWidget(centralwidget);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(500, 140, 206, 209));
    verticalLayout_2 = new QVBoxLayout(widget);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    label_x_max = new QLabel(widget);
    label_x_max->setObjectName(QString::fromUtf8("label_x_max"));
    QFont font3;
    font3.setPointSize(15);
    font3.setBold(true);
    label_x_max->setFont(font3);

    horizontalLayout->addWidget(label_x_max);

    x_max_SpinBox = new QDoubleSpinBox(widget);
    x_max_SpinBox->setObjectName(QString::fromUtf8("x_max_SpinBox"));
    x_max_SpinBox->setDecimals(7);
    x_max_SpinBox->setMinimum(-1000000.000000000000000);
    x_max_SpinBox->setMaximum(1000000.000000000000000);

    horizontalLayout->addWidget(x_max_SpinBox);

    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    label_y_max = new QLabel(widget);
    label_y_max->setObjectName(QString::fromUtf8("label_y_max"));
    label_y_max->setFont(font3);

    horizontalLayout_2->addWidget(label_y_max);

    y_max_SpinBox = new QDoubleSpinBox(widget);
    y_max_SpinBox->setObjectName(QString::fromUtf8("y_max_SpinBox"));
    y_max_SpinBox->setDecimals(7);
    y_max_SpinBox->setMinimum(-1000000.000000000000000);
    y_max_SpinBox->setMaximum(1000000.000000000000000);

    horizontalLayout_2->addWidget(y_max_SpinBox);

    verticalLayout->addLayout(horizontalLayout_2);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    label_x_min = new QLabel(widget);
    label_x_min->setObjectName(QString::fromUtf8("label_x_min"));
    label_x_min->setFont(font3);

    horizontalLayout_3->addWidget(label_x_min);

    x_min_SpinBox = new QDoubleSpinBox(widget);
    x_min_SpinBox->setObjectName(QString::fromUtf8("x_min_SpinBox"));
    x_min_SpinBox->setDecimals(7);
    x_min_SpinBox->setMinimum(-1000000.000000000000000);
    x_min_SpinBox->setMaximum(1000000.000000000000000);

    horizontalLayout_3->addWidget(x_min_SpinBox);

    verticalLayout->addLayout(horizontalLayout_3);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    label_y_min = new QLabel(widget);
    label_y_min->setObjectName(QString::fromUtf8("label_y_min"));
    label_y_min->setFont(font3);

    horizontalLayout_4->addWidget(label_y_min);

    y_min_SpinBox = new QDoubleSpinBox(widget);
    y_min_SpinBox->setObjectName(QString::fromUtf8("y_min_SpinBox"));
    y_min_SpinBox->setDecimals(7);
    y_min_SpinBox->setMinimum(-1000000.000000000000000);
    y_min_SpinBox->setMaximum(1000000.000000000000000);

    horizontalLayout_4->addWidget(y_min_SpinBox);

    verticalLayout->addLayout(horizontalLayout_4);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
    label_X = new QLabel(widget);
    label_X->setObjectName(QString::fromUtf8("label_X"));
    QFont font4;
    font4.setPointSize(25);
    font4.setBold(true);
    label_X->setFont(font4);

    horizontalLayout_5->addWidget(label_X);

    X_SpinBox = new QDoubleSpinBox(widget);
    X_SpinBox->setObjectName(QString::fromUtf8("X_SpinBox"));
    X_SpinBox->setDecimals(7);
    X_SpinBox->setMinimum(-1000000000000000019884624838656.000000000000000);
    X_SpinBox->setMaximum(1000000000000000019884624838656.000000000000000);

    horizontalLayout_5->addWidget(X_SpinBox);

    verticalLayout->addLayout(horizontalLayout_5);

    verticalLayout_2->addLayout(verticalLayout);

    graphic_build = new QPushButton(widget);
    graphic_build->setObjectName(QString::fromUtf8("graphic_build"));
    QFont font5;
    font5.setPointSize(12);
    graphic_build->setFont(font5);

    verticalLayout_2->addWidget(graphic_build);

    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "Smart_calc", nullptr));
    line->setText(QString());
    button_del->setText(
        QCoreApplication::translate("MainWindow", "AC", nullptr));
    button_pow->setText(
        QCoreApplication::translate("MainWindow", "^", nullptr));
    button_mod->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
    button_dev->setText(
        QCoreApplication::translate("MainWindow", "/", nullptr));
    button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
    button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    button_mul->setText(
        QCoreApplication::translate("MainWindow", "*", nullptr));
    button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
    button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    button_minus->setText(
        QCoreApplication::translate("MainWindow", "-", nullptr));
    button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    button_result->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
    button_dot->setText(
        QCoreApplication::translate("MainWindow", ".", nullptr));
    button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    button_plus->setText(
        QCoreApplication::translate("MainWindow", "+", nullptr));
    button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    button_open_bracket->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
    button_close_bracket->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
    button_cos->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    button_tan->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    button_sqrt->setText(
        QCoreApplication::translate("MainWindow", "sqrt", nullptr));
    button_asin->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    button_ln->setText(
        QCoreApplication::translate("MainWindow", "ln", nullptr));
    button_sin->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    button_acos->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    button_atan->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    button_log->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    button_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
    button_backspace->setText(
        QCoreApplication::translate("MainWindow", "backspace", nullptr));
    button_credit_calc->setText(QCoreApplication::translate(
        "MainWindow", "credit calculator", nullptr));
    button_deposit_calc->setText(QCoreApplication::translate(
        "MainWindow", "deposit calculator", nullptr));
    label_x_max->setText(
        QCoreApplication::translate("MainWindow", "x_max:", nullptr));
    label_y_max->setText(
        QCoreApplication::translate("MainWindow", "y_max:", nullptr));
    label_x_min->setText(
        QCoreApplication::translate("MainWindow", "x_min:", nullptr));
    label_y_min->setText(
        QCoreApplication::translate("MainWindow", "y_min:", nullptr));
    label_X->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
    graphic_build->setText(
        QCoreApplication::translate("MainWindow", "build", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
