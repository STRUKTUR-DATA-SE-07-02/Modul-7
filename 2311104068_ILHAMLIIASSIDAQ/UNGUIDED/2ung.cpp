#include <iostream>
#include <string>
using namespace std;

// Kelas Stack berbasis array
class Stack {
private:
    static const int MAX = 100; // Kapasitas maksimum stack
    char data[MAX];            // Array untuk menyimpan data stack
    int top;                   // Indeks elemen teratas di stack

public:
    Stack() : top(-1) {} // Konstruktor: inisialisasi stack kosong

    // Fungsi untuk menambahkan elemen ke stack
    void push(char c) {
        if (top >= MAX - 1) {
            cout << "Stack overflow!" << endl;
            return;
        }
        data[++top] = c; // Tambahkan elemen dan geser top
    }

    // Fungsi untuk menghapus elemen dari stack
    char pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return '\0';
        }
        return data[top--]; // Kembalikan elemen dan kurangi top
    }

    // Fungsi untuk memeriksa apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string input;

    // Input dari pengguna
    cout << "Masukkan kata: ";
    getline(cin, input);

    Stack s;
    string reversed = "";

    // Masukkan setiap karakter ke dalam stack
    for (size_t i = 0; i < input.length(); ++i) {
        s.push(input[i]);
    }

    // Pop elemen dari stack untuk membuat string terbalik
    while (!s.isEmpty()) {
        reversed += s.pop();
    }

    // Tampilkan hasil
    cout << "Datastack Array: " << endl;
    cout << "Data: " << reversed << endl;

    return 0;
}

