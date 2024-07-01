#include <check.h>

#include "../s21_calc_back.h"

#define EPS 1e-7
#define EPS2 1e-2

START_TEST(test_case_1) {
  char *input_str = "1+2*3";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_2) {
  char *input_str = "2.0/(3.0+2.0)*5.0";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 2, EPS);
}
END_TEST

START_TEST(test_case_3) {
  char *input_str = "1+2+(3*4)+(5.1+6.8)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 26.9, EPS);
}
END_TEST

START_TEST(test_case_4) {
  char *input_str = "10.0+10.0*10.0";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 110, EPS);
}
END_TEST

START_TEST(test_case_5) {
  char *input_str = "5.0mod3.0";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 2, EPS);
}
END_TEST

START_TEST(test_case_6) {
  char *input_str = "1.0/2.0*(2.0-1.0)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.5, EPS);
}
END_TEST

START_TEST(test_case_7) {
  char *input_str = "(1-2-(0-3)-4)-5-(0-6)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -1, EPS);
}
END_TEST

START_TEST(test_case_8) {
  char *input_str = "(1+2)*((3-4)+1+(5-6+7))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 18, EPS);
}
END_TEST

START_TEST(test_case_9) {
  char *input_str = "sqrt(4)-1/2*sin(3^2-2)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 1.6715067, EPS);
}
END_TEST

START_TEST(test_case_10) {
  char *input_str = "2^3^2";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 512, EPS);
}
END_TEST

START_TEST(test_case_11) {
  char *input_str = "sin(3)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.1411200, EPS);
}
END_TEST

START_TEST(test_case_12) {
  char *input_str = "-1+8";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_13) {
  char *input_str = "-5.0mod(-3.0)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -2, EPS);
}
END_TEST

START_TEST(test_case_14) {
  char *input_str = "4+4*2/(1-5)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 2, EPS);
}
END_TEST

START_TEST(test_case_15) {
  char *input_str = "4+4*2/1-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_16) {
  char *input_str = "4+4*(2/1-5)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -8, EPS);
}
END_TEST

START_TEST(test_case_17) {
  char *input_str = "4+(4*2/1-5)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_18) {
  char *input_str = "4+4*(2/1)-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_19) {
  char *input_str = "4+(4*2/1)-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_20) {
  char *input_str = "(4+4*2/1)-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_21) {
  char *input_str = "4+(4*2)/1-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_22) {
  char *input_str = "(4+4*2)/1-5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 7, EPS);
}
END_TEST

START_TEST(test_case_23) {
  char *input_str = "8*(7+6*4)+3";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 251, EPS);
}
END_TEST

START_TEST(test_case_24) {
  char *input_str = "2/(3+2)*5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 2, EPS);
}
END_TEST

START_TEST(test_case_25) {
  char *input_str = "2+9.3-8^3/4+56.2";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -60.5, EPS);
}
END_TEST

START_TEST(test_case_26) {
  char *input_str = "2+9.3-8^3/(4+56.2)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 2.7950166, EPS);
}
END_TEST

START_TEST(test_case_27) {
  char *input_str = "2^(3^2)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 512, EPS);
}
END_TEST

START_TEST(test_case_28) {
  char *input_str = "(2^3)^2";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 64, EPS);
}
END_TEST

START_TEST(test_case_29) {
  char *input_str = "cos(431.2*2^2/8)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -0.3902501, EPS);
}
END_TEST

START_TEST(test_case_30) {
  char *input_str = "3*sin(4+5)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 1.2363555, EPS);
}
END_TEST

START_TEST(test_case_31) {
  char *input_str = "431.2*2^2/8";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 215.6, EPS);
}
END_TEST

START_TEST(test_case_32) {
  char *input_str = "cos(sin(2+9*6^1.2-tan(1)))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.7421823, EPS);
}
END_TEST

START_TEST(test_case_33) {
  char *input_str = "sqrt(cos(sin(2+9*6^1.2-tan(1))))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.8615000, EPS);
}
END_TEST

START_TEST(test_case_35) {
  char *input_str = "sqrt(2^2)*5/(4-3mod2)*(4-sqrt(81))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, -16.6666667, EPS);
}
END_TEST

START_TEST(test_case_36) {
  char *input_str = "cos(1/3)*sin(1.352^9/(4+3))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.7876032, EPS);
}
END_TEST

START_TEST(test_case_37) {
  char *input_str = "(cos(1/3)*sin(1.352^9/(4+3))/76.56)*log(150)";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.0223863, EPS);
}
END_TEST

START_TEST(test_case_38) {
  char *input_str = "2+(-(-(-(-1))))";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 3, EPS);
}
END_TEST

START_TEST(test_case_39) {
  char *input_str = "cos(6*3)/5";
  double result = 0;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, 0);
  ck_assert_double_eq_tol(result, 0.1320633, EPS);
}
END_TEST

START_TEST(test_case_40) {
  char *input_str = "X+15";
  double result = 0;
  double x_value = 2;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, x_value);
  ck_assert_double_eq_tol(result, 17, EPS);
}
END_TEST

START_TEST(test_case_41) {
  char *input_str = "X^2+X*2";
  double result = 0;
  double x_value = 3;
  char out_str[TOKEN_LEN * 2];
  d_algorithm(input_str, out_str);
  result = get_solution(out_str, x_value);
  ck_assert_double_eq_tol(result, 15, EPS);
}
END_TEST

START_TEST(test_case_42) {
  double total_loan_amount = 120000;
  double term = 24;
  double interest_rate = 9;
  double monthlyPaymentFirst, loanOverpayment, totalPayout;
  annuity(total_loan_amount, term, interest_rate, &monthlyPaymentFirst,
          &loanOverpayment, &totalPayout);
  ck_assert_double_eq_tol(monthlyPaymentFirst, 5482.17, EPS2);
  ck_assert_double_eq_tol(loanOverpayment, 11572.06, EPS2);
  ck_assert_double_eq_tol(totalPayout, 131572.06, EPS2);
}
END_TEST

START_TEST(test_case_43) {
  double total_loan_amount = 120000;
  double term = 24;
  double interest_rate = 9;
  double monthlyPaymentFirst, monthlyPaymentLast, loanOverpayment, totalPayout;
  differentiated(total_loan_amount, term, interest_rate, &monthlyPaymentFirst,
                 &monthlyPaymentLast, &loanOverpayment, &totalPayout);
  ck_assert_double_eq_tol(monthlyPaymentFirst, 5900, EPS2);
  ck_assert_double_eq_tol(monthlyPaymentLast, 5037.50, EPS2);
  ck_assert_double_eq_tol(loanOverpayment, 11250, EPS2);
  ck_assert_double_eq_tol(totalPayout, 131250, EPS2);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("SmartCalc");
  TCase *smart_calc = tcase_create("SmartCalc");
  suite_add_tcase(s1, smart_calc);
  tcase_add_test(smart_calc, test_case_1);
  tcase_add_test(smart_calc, test_case_2);
  tcase_add_test(smart_calc, test_case_3);
  tcase_add_test(smart_calc, test_case_4);
  tcase_add_test(smart_calc, test_case_5);
  tcase_add_test(smart_calc, test_case_6);
  tcase_add_test(smart_calc, test_case_7);
  tcase_add_test(smart_calc, test_case_8);
  tcase_add_test(smart_calc, test_case_9);
  tcase_add_test(smart_calc, test_case_10);
  tcase_add_test(smart_calc, test_case_11);
  tcase_add_test(smart_calc, test_case_12);
  tcase_add_test(smart_calc, test_case_13);
  tcase_add_test(smart_calc, test_case_14);
  tcase_add_test(smart_calc, test_case_15);
  tcase_add_test(smart_calc, test_case_16);
  tcase_add_test(smart_calc, test_case_17);
  tcase_add_test(smart_calc, test_case_18);
  tcase_add_test(smart_calc, test_case_19);
  tcase_add_test(smart_calc, test_case_20);
  tcase_add_test(smart_calc, test_case_21);
  tcase_add_test(smart_calc, test_case_22);
  tcase_add_test(smart_calc, test_case_23);
  tcase_add_test(smart_calc, test_case_24);
  tcase_add_test(smart_calc, test_case_25);
  tcase_add_test(smart_calc, test_case_26);
  tcase_add_test(smart_calc, test_case_27);
  tcase_add_test(smart_calc, test_case_28);
  tcase_add_test(smart_calc, test_case_29);
  tcase_add_test(smart_calc, test_case_30);
  tcase_add_test(smart_calc, test_case_31);
  tcase_add_test(smart_calc, test_case_32);
  tcase_add_test(smart_calc, test_case_33);
  tcase_add_test(smart_calc, test_case_35);
  tcase_add_test(smart_calc, test_case_36);
  tcase_add_test(smart_calc, test_case_37);
  tcase_add_test(smart_calc, test_case_38);
  tcase_add_test(smart_calc, test_case_39);
  tcase_add_test(smart_calc, test_case_40);
  tcase_add_test(smart_calc, test_case_41);
  tcase_add_test(smart_calc, test_case_42);
  tcase_add_test(smart_calc, test_case_43);

  SRunner *sr = srunner_create(s1);
  int nf;
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf == 0 ? 0 : 1;
}
