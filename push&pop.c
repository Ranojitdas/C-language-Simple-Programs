#include <stdio.h>
#define MAX 5  // Maximum size of the stack

int stack[MAX];
int top = -1;  // Stack is initially empty

// Push function to add an element to the stack
void push(int element) {
    if (top == MAX - 1) {  // Check if stack is full
        printf("Stack Overflow! Cannot push.\n");
    } else {
        top++;  // Increase top
        stack[top] = element;  // Add element
        printf("%d pushed to stack.\n", element);
    }
}

// Pop function to remove an element from the stack
void pop() {
    if (top == -1) {  // Check if stack is empty
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;  // Decrease top
    }
}

// Main function
int main() {
    int choice, element;

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the element to push: ");
            scanf("%d", &element);
            push(element);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}


