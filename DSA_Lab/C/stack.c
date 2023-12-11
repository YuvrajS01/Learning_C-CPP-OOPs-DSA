#include<stdio.h>
#define True 1
#define False 0
#define MAX_SIZE 10
int isFull(int top) {
    if(top == MAX_SIZE-1)
    return True;
    return False;
}
int isEmpty(int top) {
    if(top == -1)
    return True;
    return False;
}
void displayStack(int stack[], int top){
    if(isEmpty(top)){
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack contents are: ");
    while(top >= 0) {
        printf("%d  ",stack[top]);
        top--;
    }
    printf("\n");
    return;
}
int push(int stack[], int data, int *top) {
    if(isFull(*top)) {
        printf("Stack Overflow\n");
        return 1;
    }
    stack[*top + 1] = data;
    *top = *top + 1;
    return 0;

}
int pop(int stack[], int *data, int *top){
    if(isEmpty(*top)) {
        printf("Stack Underflow\n");
        return 1;
    }
    *data = *top;
    *top = *top - 1;
    return 0;
}
int menu() {
    int ch;
    printf("\nMenu:- \n");
    printf("1. Display Stack\n");
    printf("2. Push to Stack\n");
    printf("3. Pop from Stack\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}
int main() {
    int stack[MAX_SIZE];
    int top = -1;
    int choice, data, flag;
    char ch;//variable to make pause using scanf
    while((choice = menu())!=0){
        switch (choice)
        {
        case 1:
            displayStack(stack, top);
            printf("Press ENTER to continue");
            while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer
            getchar();
            break;
        case 2:
            printf("Enter the data to be pushed: ");
            scanf("%d", &data);
            flag = push(stack, data, &top);
            if(!flag) 
            printf("Data pushed sucessfully!\n");
            printf("Press ENTER to continue");
            while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer
            getchar();
            break;
        case 3:
            flag = pop(stack, &data, &top);
            if(!flag)
            printf("Popped %d sucessfully!\n", data);
            printf("Press ENTER to continue");
            while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer
            getchar();
            break;
        default:
            printf("Invalid Input. Please try again.\n");
            printf("Press ENTER to continue");
            while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer
            getchar();
            break;
        }
    }
}
