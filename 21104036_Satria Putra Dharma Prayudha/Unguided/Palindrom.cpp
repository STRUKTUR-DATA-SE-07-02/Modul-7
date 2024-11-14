#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string filteredStr = "";

    // Memfilter karakter, menghapus spasi dan menjadikan huruf kecil
    for (char c : str) {
        if (isalpha(c)) {
            filteredStr += tolower(c);
        }
    }

    // Menambahkan karakter ke stack
    for (char c : filteredStr) {
        s.push(c);
    }

    // Memeriksa apakah string sama saat dibaca dari depan dan belakang
    for (char c : filteredStr) {
        if (c != s.top()) {
            return false;
        }
        s.pop();
    }

    return true;
}

int main() {
    string str;
    cout << "Masukkan kalimat: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
