/*
#include <iostream>
#define MAX 100
using namespace std;

class stack{
private:
    int top;
    int arr[MAX];

public:
    stack() {top = -1;}

    bool isFull() {return top == MAX -1;}
    bool isEmpty() {return top == -1;}

    void push(int x){
        if(isFull()){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(isEmpty()){
            cout << "Stack Uderflow\n";
            return;
        }
        top--;
    }

    int peek(){
        if(!isEmpty()){
            return arr[top];
        }
        cout << "Stack is Empty\n";
        return -1;
    }
    void display(){
        if(isEmpty()){
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(40);

    cout << "Stack Element: ";
    s.display();

    cout << "Top element " << s.peek() << "\n";

    s.pop();
    s.pop();
    cout << "After popping, stack elements: ";
    s.display();

    return 0;
}
*/

// stack menggunakan pointer
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class stack {
private:
    Node* top;
public:
    stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if(isEmpty()) {
            cout << "Stack is empty\n";
            return -1;  // Menambahkan return value untuk kasus stack kosong
        }
        return top->data;
    }

    void display() {
        if(isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* current = top;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(40);

    cout << "Stack Elements: ";
    s.display();

    cout << "Top element: " << s.peek() << "\n";

    s.pop();
    s.pop();

    cout << "After popping, stack elements: ";
    s.display();

    return 0;
}
