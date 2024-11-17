#include <iostream>
#define MAX 100
using namespace std;

class Stack {
private:
    char data[MAX];
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

    void push(char x) {
        if (!isFull()) {
            data[++top] = x;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return '\0';
    }
};

void reverseString(string str) {
    Stack s;

    // Push semua karakter ke stack
    for(int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    cout << "Datastack Array : " << endl;
    cout << "Data : ";

    // Pop dan cetak karakter dari stack
    while(!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;
}

int main() {
    string kalimat;
    cout << "Masukkan Kata : ";
    getline(cin, kalimat);

    reverseString(kalimat);

    return 0;
}
