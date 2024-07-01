#ifndef S21_SMARTCALC_H
#define S21_SMARTCALC_H

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define TOKEN_LEN 256

typedef struct stack_token {
  char token[TOKEN_LEN];
  struct stack_token *before;
} t_stack;

typedef struct stack_double {
  double num;
  struct stack_double *before;
} d_stack;

t_stack *create_t_stack();
void push_t(t_stack **stack_p, const char *str);
void pop_t(t_stack **stack_p);
void delete_t(t_stack **stack_p);
d_stack *create_d_stack();
void push_d(d_stack **stack_p, double num);
void pop_d(d_stack **stack_p);
void delete_d(d_stack **stack_p);

char *get_token(char *in, char *out);
char *add_token(char *token, char *out);
int get_pr(char token);
void add_space(char *in, char *out);
void replace_unary_minus(char *in);
void d_algorithm(char *input, char *out);
double get_res(double operand1, double operand2, const char *operation);
double get_function_res(double arg, const char *function);
double get_solution(char *in, double x);

void annuity(double totalLoanAmount, double term, double interestRate,
             double *monthlyPayment, double *loanOverpayment,
             double *totalPayout);

void differentiated(double totalLoanAmount, double term, double interestRate,
                    double *monthlyPaymentFirst, double *monthlyPaymentLast,
                    double *loanOverpayment, double *totalPayout);

#endif  // S21_SMARTCALC_H
