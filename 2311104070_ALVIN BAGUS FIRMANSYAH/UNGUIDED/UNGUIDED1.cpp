#include <iostream>
#include <cctype> // Untuk fungsi tolower dan isalpha
#include <stack>  // Untuk stack
#include <string>
using namespace std;

bool isPalindrome(const string &str) {
    stack<char> s;

    // Menyimpan hanya karakter alphanumeric dalam stack
    for (char c : str) {
        if (isalnum(c)) {
            s.push(tolower(c));  // Masukkan karakter ke stack dalam huruf kecil
        }
    }

    // Memeriksa karakter dari depan dan belakang
    int i = 0;
    while (i < str.size()) {
        if (isalnum(str[i])) {
            if (s.top() != tolower(str[i])) {
                return false;  // Jika karakter tidak sama, bukan palindrom
            }
            s.pop();  // Hapus elemen dari stack jika cocok
        }
        i++;
    }

    return true;  // Jika seluruh karakter cocok
}

int main() {
    string input;

    cout << "Masukkan kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah palindrom.\n";
    } else {
        cout << "Kalimat tersebut bukan palindrom.\n";
    }

    return 0;
}
