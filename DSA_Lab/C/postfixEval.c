#include<stdio.h>
#include<ctype.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int val) {
    if(top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    }
    stack[++top] = val;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return 1;
    }
    return stack[top--];
}

int evalPostfix(char* exp) {
    int i, oprnd1, oprnd2;
    for(i = 0; exp[i] != '\0'; i++ ) {
        if(isdigit(exp[i])) {
            push(exp[i]-'0');
        }
        else {
            oprnd1 = pop();
            oprnd2 = pop();
            switch (exp[i])
            {
            case '+':
                push(oprnd2 + oprnd1);
                break;
            case '-':
                push(oprnd2 - oprnd1);
                break;
            case '*':
                push(oprnd2 * oprnd1);
                break;
            case '/':
                push(oprnd2 / oprnd1);
                break;
            
            default:
                printf("Invalid Operator\n");
                break;
            }
        }
        
    }
    return pop();
}

int main(void) {
    char exp[100]; //= "623*/34*+32*-";
    printf("Enter Expression: ");
    scanf("%s",exp);
    int result = evalPostfix(exp);
    printf("Evaluted result is: %d\n", result);
}

