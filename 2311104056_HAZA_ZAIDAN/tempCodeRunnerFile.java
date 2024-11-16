#include <iostream>

using namespace std;

// Mendefinisikan ukuran maksimum tumpukan
#define MAX 100

class Stack {
private:
    int arr[MAX];  // Array untuk menyimpan elemen tumpukan
    int top;       // Indeks elemen teratas

public:
    // Konstruktor: Inisialisasi indeks teratas ke -1 (tumpukan kosong)
    Stack() {
        top = -1;
    }

    // Mengecek apakah tumpukan penuh
    bool isFull() {
        return top == MAX - 1;
    }

    // Mengecek apakah tumpukan kosong
    bool isEmpty() {
        return top == -1;
    }

    // Menambahkan elemen ke tumpukan
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Menghapus elemen teratas dari tumpukan
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // Mengembalikan elemen teratas tanpa menghapusnya
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1; // Mengembalikan nilai sentinel jika tumpukan kosong
        }
        return arr[top];
    }

    // Menampilkan semua elemen tumpukan
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "After popping, stack elements: ";
    s.display();

    return 0;
}