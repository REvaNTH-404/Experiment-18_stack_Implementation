#include <iostream>
using namespace std;

// Define the maximum size of the stack
#define size 5 

// Define an error code for operations on an empty stack
#define ERROR -9999

class Stack {
    int top;
    int ar[size];

public:
    // Constructor
    Stack() {
        top = -1;
        // The initialization ar[0]=0; is unnecessary for a stack implementation
    }

    void push(int);
    int pop();
    int peak(); 
    void disp();
};

void Stack::push(int num) {
    if (top == size - 1) {
        cout << "STACK OVERFLOW: Stack is full" << endl;
        return;
    } else {
        ar[++top] = num;
    }
}

int Stack::pop() {
    int val;
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    } else {
        val = ar[top--];
        return val;
    }
}

int Stack::peak() { // This method is generally called 'peek'
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    } else {
        return ar[top];
    }
}

void Stack::disp() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return;
    } else {
        // Displaying elements from the bottom (index 0) to the top (index 'top')
        cout << "Stack contents (bottom to top): ";
        for (int i = 0; i <= top; i++) {
            cout << ar[i] << (i == top ? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    Stack s1;
    s1.push(7);  // Stack: [7] (top=0)
    s1.push(10); // Stack: [7, 10] (top=1)
    s1.push(4);  // Stack: [7, 10, 4] (top=2)

    // 1. Pop operation
    int val = s1.pop(); // Pop 4. Stack: [7, 10] (top=1)
    cout << val << endl; // Output: 4

    // 2. Peak (Peek) operation - **Syntax Error Corrected**
    int top_val = s1.peak(); // Peek at top element (10)
    cout << top_val << endl; // Output: 10

    // 3. Display operation
    s1.disp(); // Output: Stack contents (bottom to top): 7 10

    return 0; // Corrected return value
}
