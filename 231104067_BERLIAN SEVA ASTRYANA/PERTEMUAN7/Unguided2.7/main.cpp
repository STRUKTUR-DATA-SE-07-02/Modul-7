#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    stack<char> s;

    cout << "Masukkan Kata: ";
    getline(cin, input); // Membaca input string dengan spasi

    // Masukkan setiap karakter ke dalam stack
    for (char c : input) {
        s.push(c);
    }

    cout << "Datastack Array:\nData : ";

    // Keluarkan karakter dari stack untuk membalikkan string
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    cout << endl;
    return 0;
}
