#include <iostream>
#define MAX 100

using namespace std;

class Stack
{
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push(int x) {
        if (isFull())
        {
            cout << "Stack Overflow";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty())
        {
            cout << "Stack Underflow";
            return;
        }
        top--;
    }

    int peek() {
        if (!isEmpty())
        {
            return arr[top];
        } 
        cout << "Stack Underflow";
        return 0;
    }

    void display() {
        if (isEmpty())
        {
            cout << "Stack is Empty";
            return;
        }
        for (int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack elements are: ";
    s.display();

    cout << "Top element is: " << s.peek() << "\n";

    s.pop();
    s.pop();
    cout << "After popping, the stack is ";
    s.display();

    return 0;
}