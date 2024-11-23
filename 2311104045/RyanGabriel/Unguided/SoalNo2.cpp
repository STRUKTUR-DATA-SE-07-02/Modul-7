#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Stack {
private:
    int top;
    string arr[100];

public:

    Stack() {
        top = -1;
    }

    // Fungsi untuk menambah data ke stack
    void push(string data) {
        arr[++top] = data;
    }

    // Fungsi untuk memeriksa apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Fungsi untuk mengambil data dari stack
    string pop() {
        if (!isEmpty())
            return arr[top--];
        return "";
    }
};

int main() {
    Stack s;
    string input;
    string kata = "";

    
    cout << "Masukkan Kata : ";
    getline(cin, input);

    
    for (char c : input) {
        if (c == ' ') {
            if (kata != "") {
                s.push(kata);  
                kata = "";
            }
        } else {
            kata = c + kata;  
        }
    }

    
    if (kata != "") {
        s.push(kata);
    }

    // Menampilkan stack
    cout << "Datastack Array : " << endl;
    cout << "Data : ";

    
    while (!s.isEmpty()) {
        cout << s.pop() << " ";  
    }

    cout << endl;

    return 0;
}