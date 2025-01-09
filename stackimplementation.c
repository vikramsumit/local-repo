// Program to write stack by using Array/linked list
  
#include <stdio.h>
#define SIZE 10

int main() {
    int stack[SIZE], choice, item, top = -1;
    printf("Stack Operations using Array\n");

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                if (top == SIZE - 1) {
                    printf("Stack is full (Overflow)\n");
                } else {
                    printf("Enter item to push: ");
                    scanf("%d", &item);
                    stack[++top] = item;
                    printf("Item pushed: %d\n", item);
                }
                break;

            case 2: 
                if (top == -1) {
                    printf("Stack is empty (Underflow)\n");
                } else {
                    item = stack[top--];
                    printf("Item popped: %d\n", item);
                }
                break;

            case 3: 
                if (top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements: ");
                    for (int i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: 
                printf("Exiting\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    // simple code 
    
}
