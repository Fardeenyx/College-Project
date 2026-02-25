#include <iostream>
#include <stdlib.h>
using namespace std;

int top = -1;

void push(int *stack, int size);
void pop(int *stack);
void peek(int *stack);
void display(int *stack);

int main(){
    int *stack;
    int size;
    int choice;

    cout << "\n" << "Enter the size of the stack: ";
    cin >> size;
    
    stack = (int*) malloc(size * sizeof(int));

    if(stack == NULL){
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    while(1){

    cout << "\n" << "1) Push" << "\n";
    cout << "2) Pop" << "\n";
    cout << "3) Peek" << "\n";
    cout << "4) Display" << "\n";
    cout << "5) Exit" << "\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            push(stack, size);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            display(stack);
            break;
        case 5:
            return 1;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
}

    free(stack);

    return 0;
}

void push(int *stack, int size){
    int x;

    if(top == size - 1){
        cout << "\n" << "Stack Overflow!" << "\n";
        return;    
    }

    cout << "Enter data: ";
    cin >> x;

    top++;
    stack[top] = x;
    cout << "Item push in stack: " << x << endl;
}

void pop(int *stack){
    int x;

    if(top == -1){
        cout << "Stack Underflow!" << "\n";
        return;
    }

    x = stack[top];
    top--;
    cout << "Item %d poped" << x << "\n";
}

void peek(int *stack){
    if(top == -1){
        cout << "Stack is empty!" << endl;
        return;
    }

    cout << "The top most element in stack: " << stack[top] << endl;
}

void display(int *stack){
    if(top == -1){
        cout << "Stack is empty!" << endl;
        return;
    }

    for(int i = top; i >= 0; i--){
        cout << "" << stack[i] << "\n";
    }
}