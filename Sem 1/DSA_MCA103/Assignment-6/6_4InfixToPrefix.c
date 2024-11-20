#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Stack operations
void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    if (top == -1) return -1;
    else return stack[top--];
}

int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return 0;
}

// Function to reverse a string
void reverse(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to convert infix to prefix
void infixToPrefix(char* exp) {
    reverse(exp);

    for (int i = 0; exp[i]; i++) {
        if (exp[i] == '(') exp[i] = ')';
        else if (exp[i] == ')') exp[i] = '(';
    }

    char* e = exp;
    char prefix[MAX];
    int k = 0;

    while (*e != '\0') {
        if (isalnum(*e)) {
            prefix[k++] = *e;
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((prefix[k++] = pop()) != '(');
            k--;
        } else {
            while (precedence(stack[top]) >= precedence(*e)) {
                prefix[k++] = pop();
            }
            push(*e);
        }
        e++;
    }

    while (top != -1) {
        prefix[k++] = pop();
    }
    prefix[k] = '\0';

    reverse(prefix);
    printf("Prefix expression: %s\n", prefix);
}

int main() {
    char exp[MAX];
    printf("Enter infix expression: ");
    scanf("%s", exp);
    infixToPrefix(exp);
    return 0;
}
