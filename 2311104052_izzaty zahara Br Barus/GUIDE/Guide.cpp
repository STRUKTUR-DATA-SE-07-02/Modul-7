#include <iostream>
#define MAX 100

using namespace std;

class Stack
{
private:
    int top;
    int arr[MAX];
    /* data */
public:
    Stack(/* args */) {top = -1;}
    bool isFull() { return top == MAX -1; }
    bool isEmpty(){ return top == -1; }

    void push(int x){
        if (isFull()){
            cout << "Stack Overflow\n";
            return;
        }
        arr [++top] = x;
    }

    void pop(){
        if (isEmpty()){
            cout << "Stack Underflow\n";
            return;
        }
        top --;
    }
    
    int peek(){
        if(!isEmpty()){
            return arr[top];
        }
        cout << "Stack is Empty\n";
        return -1;
    }

    void display(){
        if (isEmpty()){
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
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack element: ";
    s.display();

    cout << "Top element: " << s.peek() << "\n";

    s.pop();
    s.pop();
    cout << "After Popping, stack elements:  ";
    s.display();

    return 0;
}