#include "s21_calc_back.h"

t_stack *create_t_stack() {
  t_stack *stack = malloc(sizeof(t_stack));
  stack->before = NULL;
  return stack;
}

void push_t(t_stack **stack_p, const char *str) {
  t_stack *new_stack = malloc(sizeof(t_stack));
  strcpy(new_stack->token, str);
  new_stack->before = *stack_p;
  *stack_p = new_stack;
}

void pop_t(t_stack **stack_p) {
  t_stack *temp_stack = *stack_p;
  *stack_p = (*stack_p)->before;
  free(temp_stack);
}

void delete_t(t_stack **stack_p) {
  while ((*stack_p)->before != NULL) pop_t(stack_p);
  free(*stack_p);
  *stack_p = NULL;
}

d_stack *create_d_stack() {
  d_stack *stack = malloc(sizeof(d_stack));
  stack->before = NULL;
  return stack;
}

void push_d(d_stack **stack_p, double num) {
  d_stack *new_stack = malloc(sizeof(d_stack));
  new_stack->num = num;
  new_stack->before = *stack_p;
  *stack_p = new_stack;
}

void pop_d(d_stack **stack_p) {
  d_stack *temp_stack = *stack_p;
  *stack_p = (*stack_p)->before;
  free(temp_stack);
}

void delete_d(d_stack **stack_p) {
  while ((*stack_p)->before != NULL) pop_d(stack_p);
  free(*stack_p);
  *stack_p = NULL;
}

char *get_token(char *in, char *out) {
  int i = 0;
  for (; *in != ' ' && *in != '\0'; in++, i++) out[i] = *in;
  out[i] = '\0';
  while (*in && *in == ' ') in++;
  return in;
}

char *add_token(char *token, char *out) {
  while (*token) {
    *out = *token;
    token++, out++;
  }
  *out++ = ' ';
  *out = '\0';
  return out;
}

int get_pr(char token) {
  int return_value = 0;
  if (token == '+' || token == '-')
    return_value = 1;
  else if (token == 'm')
    return_value = 2;
  else if (token == '*' || token == '/')
    return_value = 3;
  else if (token == '~')
    return_value = 4;
  else if (token == '^')
    return_value = 5;
  return return_value;
}

void add_space(char *in, char *out) {
  bool first_sym = true;
  while (*in) {
    while (strchr("0123456789.X", *in) && *in)
      *out++ = *in++, first_sym = false;
    if (strchr("()+-*/^", *in) && *in) {
      if (!first_sym && *(out - 1) != ' ') *out++ = ' ';
      *out++ = *in++;
      *out++ = ' ';
    } else if (*in == 'c' || *in == 't' || *in == 'm' ||
               (*in == 's' && *(in + 1) == 'i') ||
               (*in == 'l' && *(in + 1) == 'o')) {
      if (!first_sym && *(out - 1) != ' ') *out++ = ' ';
      for (int i = 0; i < 3; i++) *out++ = *in++;
      *out++ = ' ';
    } else if (*in == 'a' || *in == 's') {
      if (!first_sym && *(out - 1) != ' ') *out++ = ' ';
      for (int i = 0; i < 4; i++) *out++ = *in++;
      *out++ = ' ';
    } else if (*in == 'l') {
      if (!first_sym && *(out - 1) != ' ') *out++ = ' ';
      for (int i = 0; i < 2; i++) *out++ = *in++;
      *out++ = ' ';
    }
    first_sym = false;
  }
  *out = '\0';
}

void replace_unary_minus(char *in) {
  if (*in++ == '-') *(in - 1) = '~';
  in++;
  while (*in) {
    if (*in == '-' && *(in - 2) == '(') *in = '~';
    in++;
  }
}

void d_algorithm(char *input, char *out) {
  char *space_input = malloc(sizeof(char) * TOKEN_LEN * 2);
  add_space(input, space_input);
  replace_unary_minus(space_input);
  char *in = space_input;
  char temp_token[TOKEN_LEN];
  t_stack *stack = create_t_stack();
  while (*in != '\0') {
    in = get_token(in, temp_token);
    if (strchr("0123456789.X", *temp_token)) {
      out = add_token(temp_token, out);
    } else if (strchr("acstl(", *temp_token)) {
      push_t(&stack, temp_token);
    } else if (strchr("+-*/^m~", *temp_token)) {
      while (get_pr(*stack->token) >= get_pr(*temp_token) &&
             !(*stack->token == '^' && *stack->token == *temp_token)) {
        out = add_token(stack->token, out);
        pop_t(&stack);
      }
      push_t(&stack, temp_token);
    } else if (*temp_token == ')') {
      while (*stack->token != '(') {
        out = add_token(stack->token, out);
        pop_t(&stack);
      }
      pop_t(&stack);
      if (*stack->token && strchr("acstl", *stack->token)) {
        out = add_token(stack->token, out);
        pop_t(&stack);
      }
    }
  }
  while (stack->before != NULL) {
    out = add_token(stack->token, out);
    pop_t(&stack);
  }
  delete_t(&stack);
  free(space_input);
}

double get_res(double operand1, double operand2, const char *operation) {
  double result = 0;
  if (*operation == '+')
    result = operand1 + operand2;
  else if (*operation == '-')
    result = operand1 - operand2;
  else if (*operation == '*')
    result = operand1 * operand2;
  else if (*operation == '/')
    result = operand1 / operand2;
  else if (*operation == '^')
    result = pow(operand1, operand2);
  if (*operation == 'm') result = (int)operand1 % (int)operand2;
  return result;
}

double get_function_res(double arg, const char *function) {
  double result = 0;
  if (!strcmp(function, "cos"))
    result = cos(arg);
  else if (!strcmp(function, "sin"))
    result = sin(arg);
  else if (!strcmp(function, "tan"))
    result = tan(arg);
  else if (!strcmp(function, "acos"))
    result = acos(arg);
  else if (!strcmp(function, "asin"))
    result = asin(arg);
  else if (!strcmp(function, "atan"))
    result = atan(arg);
  else if (!strcmp(function, "sqrt"))
    result = sqrt(arg);
  else if (!strcmp(function, "ln"))
    result = log(arg);
  else if (!strcmp(function, "log"))
    result = log10(arg);
  return result;
}

double get_solution(char *in, double x) {
  d_stack *stack = create_d_stack();
  double op1 = 0, op2 = 0;
  double result = 0;
  char temp_token[TOKEN_LEN];
  while (*in) {
    in = get_token(in, temp_token);
    if (*temp_token == 'X') {
      push_d(&stack, x);
    } else if (strchr("0123456789.", *temp_token)) {
      push_d(&stack, strtod(temp_token, NULL));
    } else if (strchr("+-*/^m", *temp_token)) {
      op2 = stack->num;
      pop_d(&stack);
      op1 = stack->num;
      pop_d(&stack);
      push_d(&stack, get_res(op1, op2, temp_token));
    } else if (*temp_token == '~') {
      stack->num *= -1;
    } else if (strchr("sctal", *temp_token)) {
      stack->num = get_function_res(stack->num, temp_token);
    }
  }
  result = stack->num;
  delete_d(&stack);
  return result;
}

void annuity(double totalLoanAmount, double term, double interestRate,
             double *monthlyPayment, double *loanOverpayment,
             double *totalPayout) {
  interestRate /= 100;
  double interestRateForPeriod = interestRate / 12;
  *monthlyPayment =
      totalLoanAmount *
      (interestRateForPeriod +
       interestRateForPeriod / (pow(1 + interestRateForPeriod, term) - 1));
  *totalPayout = *monthlyPayment * term;
  *loanOverpayment = *totalPayout - totalLoanAmount;
}

void differentiated(double totalLoanAmount, double term, double interestRate,
                    double *monthlyPaymentFirst, double *monthlyPaymentLast,
                    double *loanOverpayment, double *totalPayout) {
  *loanOverpayment = 0;
  *totalPayout = 0;
  double principalDept = totalLoanAmount / term;
  interestRate /= 100;
  for (int i = 0; i < term; i++) {
    *loanOverpayment += totalLoanAmount * (interestRate / 12);
    *totalPayout += totalLoanAmount * (interestRate / 12) + principalDept;
    if (i == 0)
      *monthlyPaymentFirst =
          totalLoanAmount * (interestRate / 12) + principalDept;
    if (i == term - 1)
      *monthlyPaymentLast =
          totalLoanAmount * (interestRate / 12) + principalDept;
    totalLoanAmount -= principalDept;
  }
}
