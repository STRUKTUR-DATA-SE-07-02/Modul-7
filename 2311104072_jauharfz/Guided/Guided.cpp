#define MAX 100
#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }
    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack is full/Overflow\n";
            return;
        }
        arr[++top] = x;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty/Underflow\n";
            return;
        }
        top--;
    }
    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        cout << "Stack is empty\n";
        return -1;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack Elements: ";
    s.display();

    cout << "Top Element: " << s.peek() << "\n";
    s.pop();
    s.pop();
    cout << "After Popping, Stack Elements: ";
    s.display();
    return 0;
};
