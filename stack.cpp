#include<bits/stdc++.h>
#include<string.h>
using namespace std;

const int SIZE = 100;
char myStack[SIZE]; 
int top = -1;

void push(char item) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow! Cannot push element.\n";
    } else {
        myStack[++top] = item;
        cout << "Pushed: " << item << endl;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop element.\n";
        return '\0';
    } else {
        char popped = myStack[top];
        top--;
        return popped;
    }
}

char peek() {
    if (top == -1) {
        cout << "Stack is empty! Cannot peek.\n";
        return '\0';
    } else {
        return myStack[top];
    }
}

int main() {
    int choice;
    char item;
    
    do {
        cout << "\n1. PUSH";
        cout << "\n2. POP";
        cout << "\n3. PEEK";
        cout << "\n0. EXIT";
        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter the input: ";
                cin >> item;
                push(item);
                break;

            case 2: {
                char ret = pop();
                if (ret != '\0') cout << "Deleted: " << ret << endl;
                break;
            }

            case 3: {
                char ret = peek();
                if (ret != '\0') cout << "Top element: " << ret << endl;
                break;
            }

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}