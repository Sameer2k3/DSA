#include <stdio.h>
#include <stdlib.h>

int *stack;     // dynamic array
int top = -1;
int size;       // user-defined size

void push(int value) {
    if (top == size - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
        return -1;
    } else {
        int val = stack[top--];
        printf("%d popped from stack.\n", val);
        return val;
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack[top];
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    printf("Enter size of the stack: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int)); // allocate dynamic array

    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element is: %d\n", value);
                break;

            case 4:
                display();
                break;

            case 5:
                free(stack); // free memory
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
