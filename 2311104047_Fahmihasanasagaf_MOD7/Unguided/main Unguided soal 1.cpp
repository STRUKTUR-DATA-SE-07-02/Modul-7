#include <iostream>
#include <stack>
#include <algorithm> // untuk transform
#include <cctype>    // untuk isalnum

using namespace std;

bool isPalindrome(string input) {
    // Menghapus spasi dan simbol, lalu mengubah menjadi huruf kecil
    string cleanedInput = "";
    for (char ch : input) {
        if (isalnum(ch)) { // Memeriksa apakah karakter adalah huruf/angka
            cleanedInput += tolower(ch);
        }
    }

    // Menggunakan stack untuk membalik string
    stack<char> s;
    for (char ch : cleanedInput) {
        s.push(ch);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    // Membandingkan string asli yang dibersihkan dengan string terbalik
    return cleanedInput == reversed;
}

int main() {
    string input;
    cout << "Masukan Kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
