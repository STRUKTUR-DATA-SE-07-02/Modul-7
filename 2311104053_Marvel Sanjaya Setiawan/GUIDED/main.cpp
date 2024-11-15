//#include <iostream>
//#define MAX 100
//
//using namespace std;
//
//class Stack {
//private:
//    int top;
//    int arr[MAX];
//
//public:
//    Stack() { top = -1; }
//
//    bool isFull() {return top == MAX -1; }
//    bool isEmpty() {return top == -1; }
//
//    void push(int x){
//        if (isFull()){
//            cout << "Stack Overflow\n";
//            return;
//        }
//        arr[++top] = x;
//    }
//    void pop(){
//        if (isEmpty()){
//            cout << "Stack Overflow\n";
//            return;
//        }
//        top--;
//    }
//    int peek(){
//        if (!isEmpty()){
//            return arr[top];
//        }
//        cout << "Stack Overflow\n";
//        return -1;
//    }
//    void display(){
//        if (isEmpty()){
//            cout << "Stack is empty\n";
//            return;
//        }
//        for (int i = top; i >= 0; i--){
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//    }
//};
//
//int main()
//{
//    Stack s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//
//    cout << "Stack elements: ";
//    s.display();
//
//    cout << "Top elements: " << s.peek() << "\n";
//
//    s.pop();
//    s.pop();
//    cout << "After popping, stack elements: ";
//    s.display();
//
//    return 0;
//}
#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack{
    private:
        Node *top;

    public:
        Stack() { top = NULL; }

        bool isEmpty() { return top == NULL; }

        void push(int x) {
            Node* newNode = new Node(x);
            newNode->next = top;
            top = newNode;
        }

        void pop(){
            if (isEmpty()){
                cout << "Stack Overflow\n";
                return;
            }
            Node* temp = top;
            top = top -> next;
            delete temp;
        }

        int peek() {
            if (!isEmpty())
            {
                return top->data;
            }
            cout << "Stack Underflow\n";
            return -1;
        }

        void display(){
            if (isEmpty()){
                cout << "Stack is empty\n";
                return;
            }
            Node* current = top;
            while (current){
                cout << current -> data << " ";
                current = current->next;
            }
            cout <<"\n";
        }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    cout << "Top elements: " << s.peek() << "\n";

    s.pop();
    s.pop();
    cout << "After popping, stack elements: ";
    s.display();

    return 0;
}
