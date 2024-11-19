#include <iostream>
#define MAX 100

using namespace std;

class stack{
private:
   int  top;
   int arr[MAX];
public:
   stack() { top = -1; }

   bool isFull() { return top == MAX -1; }
   bool isEmpty() { return top == -1;;}

void push(int x){
    if (isFull()){
        cout <<"Stack overflow\n";
        return;
    }
    arr[++top] = x;
}

void pop(){
    if(isEmpty()){
        cout<<"stack underflow\n";
        return;
    }
    top--;
}

int peek(){
    if(!isEmpty()){
        return arr[top];
    }
    cout<<"stack is empty\n";
    return -1;
}

void display(){
    if(isEmpty()){
        cout<<"stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

cout<<"stack elements: ";
s.display();

cout<<"top  element: "<< s.peek()<<"\n";

s.pop();
s.pop();

cout<<"after popping, stack elements: ";
s.display();
return 0;
}