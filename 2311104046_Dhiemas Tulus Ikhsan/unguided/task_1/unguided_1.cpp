#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string cleanedStr = "";

    // Membersihkan string dari spasi atau karakter non-alfabet
    for (char c : str) {
        if (isalnum(c)) {
            cleanedStr += tolower(c); // Ubah menjadi huruf kecil
        }
    }

    // Memasukkan karakter ke stack
    for (char c : cleanedStr) {
        s.push(c);
    }

    // Membandingkan karakter dari depan dengan yang diambil dari stack
    for (char c : cleanedStr) {
        if (c != s.top()) {
            return false; // Jika berbeda, bukan palindrom
        }
        s.pop();
    }

    return true; // Jika semua cocok, maka palindrom
}

int main() {
    string input;
    cout << "Masukkan Kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
