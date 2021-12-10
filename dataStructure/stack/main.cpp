#include <iostream>
using namespace std;

#define SIZE 1000

class Stack {
    int top;

public:
    int stack[SIZE];

    Stack() {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int num) {
    if (top >= (SIZE-1)) {
        cout << "Stack overflow";
        return false;
    }
    stack[++top] = num;
    cout << num << " number pushed in stack\n";
    return true;
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack underflow";
        return 0;
    } 
    int popNum = stack[top--];
    return popNum;
}

int Stack::peek() {
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    int num = stack[top];
    return num;
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elements in stack : ";

    while(!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}