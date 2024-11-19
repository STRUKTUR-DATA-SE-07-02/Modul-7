#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string filtered = "";

    // Filter hanya huruf kecil dan masukkan ke string baru
    for (char c : str) {
        if (isalpha(c)) {
            filtered += tolower(c);
        }
    }

    // Masukkan karakter ke dalam stack
    for (char c : filtered) {
        s.push(c);
    }

    // Periksa apakah string sama saat dibalik
    for (char c : filtered) {
        if (c != s.top()) {
            return false; // Jika ada yang tidak sama
        }
        s.pop();
    }

    return true; // Semua karakter cocok
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
