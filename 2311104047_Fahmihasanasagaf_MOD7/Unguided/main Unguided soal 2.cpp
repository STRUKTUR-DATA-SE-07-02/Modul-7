#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    char stack[100]; // Array untuk menyimpan data stack
    int top;         // Pointer ke elemen teratas stack

public:
    Stack() {
        top = -1; // Inisialisasi stack kosong
    }

    bool isFull() {
        return top == 99; // Maksimal kapasitas 100 elemen
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char ch) {
        if (!isFull()) {
            stack[++top] = ch; // Masukkan elemen ke stack
        } else {
            cout << "Stack penuh!\n";
        }
    }

    char pop() {
        if (!isEmpty()) {
            return stack[top--]; // Hapus elemen dari stack
        } else {
            cout << "Stack kosong!\n";
            return '\0';
        }
    }
};

void reverseString(const string& input) {
    Stack stack;
    cout << "Data Stack Array:\n";

    // Masukkan karakter ke dalam stack
    for (char ch : input) {
        stack.push(ch);
    }

    // Tampilkan karakter dari stack dalam urutan terbalik
    cout << "Data: ";
    while (!stack.isEmpty()) {
        cout << stack.pop();
    }
    cout << endl;
}

int main() {
    string sentence;

    cout << "Masukkan kata: ";
    getline(cin, sentence);

    reverseString(sentence);

    return 0;
}
