#include <stdio.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int x) {
    if(top == SIZE - 1) {
        printf("Stack Overflow\n\n");
    } else {
        stack[++top] = x;
        printf("Pushed %d\n\n", x);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n\n");
    } else {
        printf("Popped %d\n\n", stack[top--]);
    }
}

void peek() {
    if(top == -1) {
        printf("Stack is empty\n\n");
    } else {
        printf("Top element: %d\n\n", stack[top]);
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n\n");
    } else {
        for(int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n\n");
    }
}

int main() {
    int choice, value, n;

    while(1) {
        printf("1 Push\n2 Pop\n3 Peek\n4 Display\n5 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice) {
            case 1:
                printf("How many values do you want to push? ");
                scanf("%d", &n);
                printf("Enter %d values: ", n);

                for(int i = 0; i < n; i++) {
                    scanf("%d", &value);
                    push(value);
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n\n");
        }
    }
}
