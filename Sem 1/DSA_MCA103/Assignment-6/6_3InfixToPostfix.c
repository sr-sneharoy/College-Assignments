#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack structure
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

// Function to convert infix to postfix
void infixToPostfix(char* exp) {
    char *e, x;
    e = exp;

    printf("Postfix expression: ");
    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        } else {
            while (precedence(stack[top]) >= precedence(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    char exp[MAX];
    printf("Enter infix expression: ");
    scanf("%s", exp);
    infixToPostfix(exp);
    return 0;
}
