#include <iostream>
#include "stack.h"
using namespace std;

// Membuat stack kosong
void createStack(Stack &S) {
    S.top = -1;
}

// Menambahkan elemen ke stack
void push(Stack &S, int x) {
    if (S.top < MAX - 1) {
        S.info[++S.top] = x;
    } else {
        cout << "Stack overflow\n";
    }
}

// Menghapus elemen dari stack
int pop(Stack &S) {
    if (S.top >= 0) {
        return S.info[S.top--];
    }
    cout << "Stack underflow\n";
    return -1;
}

// Mencetak elemen stack
void printInfo(const Stack &S) {
    for (int i = 0; i <= S.top; i++) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

// Membalikkan elemen stack
void balikStack(Stack &S) {
    for (int i = 0, j = S.top; i < j; i++, j--) {
        swap(S.info[i], S.info[j]);
    }
}

// Menambahkan elemen secara ascending
void pushAscending(Stack &S, int x) {
    if (S.top < MAX - 1) {
        int i = S.top;
        while (i >= 0 && S.info[i] > x) {
            S.info[i + 1] = S.info[i];
            i--;
        }
        S.info[i + 1] = x;
        S.top++;
    } else {
        cout << "Stack overflow\n";
    }
}

// Membaca input dari user
void getInputStream(Stack &S) {
    char c;
    cout << "Masukkan elemen (akhiri dengan enter): ";
    while (cin.get(c) && c != '\n') {
        if (S.top < MAX - 1) {
            push(S, c - '0'); // Konversi char ke int
        } else {
            cout << "Stack overflow\n";
            break;
        }
    }
}
