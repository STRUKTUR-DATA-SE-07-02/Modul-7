#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

// Struktur untuk stack
struct Stack {
    string data[100];  // Array untuk menyimpan kata
    int top;          // Index top of stack
    
    // Constructor
    Stack() {
        top = -1;     // Inisialisasi stack kosong
    }
    
    // Fungsi untuk mengecek apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }
    
    // Fungsi untuk mengecek apakah stack penuh
    bool isFull() {
        return top == 99;
    }
    
    // Fungsi untuk menambah data ke stack (push)
    void push(string str) {
        if (!isFull()) {
            data[++top] = str;
        }
    }
    
    // Fungsi untuk mengambil data dari stack (pop)
    string pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return "";
    }
    
    // Fungsi untuk melihat jumlah data dalam stack
    int size() {
        return top + 1;
    }
};

// Fungsi untuk membalik kalimat
string reverseSentence(string sentence) {
    Stack wordStack;
    stringstream ss(sentence);
    string word, result;
    
    // Memisahkan kalimat menjadi kata-kata dan push ke stack
    while (ss >> word) {
        wordStack.push(word);
    }
    
    
    // Mengambil kata dari stack dan menyusun kalimat terbalik
    while (!wordStack.isEmpty()) {
        result += wordStack.pop();
        if (!wordStack.isEmpty()) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    string input;
    
    cout << "Masukkan Kata : ";
    getline(cin, input);
    
    cout << "Datastack Array : " << endl;
    cout << "Data : " << reverseSentence(input) << endl;
    
    return 0;
}