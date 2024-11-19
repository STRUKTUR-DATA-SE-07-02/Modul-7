#include <iostream>
#define MAX 100

using namespace std;

class Stack {
private:
    string data[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX-1);
    }

    void push(string x) {
        if(!isFull()) {
            top++;
            data[top] = x;
        }
    }

    string pop() {
        string x = "";
        if(!isEmpty()) {
            x = data[top];
            top--;
        }
        return x;
    }
};

int main() {
    Stack stack;
    char input[MAX];
    string word = "";

    cout << "Masukkan Kata : ";
    cin.getline(input, MAX);

    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            if(word != "") {
                stack.push(word);
                word = "";
            }
        } else {
            word += input[i];
        }
    }

    if(word != "") {
        stack.push(word);
    }

    cout << "Datastack Array : " << endl;
    cout << "Data : ";

    while(!stack.isEmpty()) {
        string current = stack.pop();
        string reversed = "";
        for(int i = current.length()-1; i >= 0; i--) {
            reversed += current[i];
        }
        cout << reversed;
        if(!stack.isEmpty()) cout << " ";
    }
    cout << endl;

    return 0;
}
