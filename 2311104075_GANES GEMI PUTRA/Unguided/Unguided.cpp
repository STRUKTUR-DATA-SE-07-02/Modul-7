#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>
using namespace std;

// Fungsi untuk memeriksa apakah kalimat adalah palindrome
bool isPalindromeWithStack(string sentence) {
    // Normalisasi kalimat: hilangkan spasi dan ubah ke huruf kecil
    string normalized = "";
    for (char ch : sentence) {
        if (isalnum(ch)) { // Memeriksa apakah karakter adalah alphanumeric
            normalized += tolower(ch);
        }
    }

    // Inisialisasi stack
    stack<char> charStack;

    // Masukkan setiap karakter ke dalam stack
    for (char ch : normalized) {
        charStack.push(ch);
    }

    // Bangun ulang kalimat dari stack (pop elemen satu per satu)
    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    // Periksa apakah kalimat asli sama dengan kalimat terbalik
    return normalized == reversed;
}

int main() {
    string sentence;
    cout << "Masukkan Kalimat: ";
    getline(cin, sentence); // Membaca input termasuk spasi

    // Periksa dan tampilkan hasilnya
    if (isPalindromeWithStack(sentence)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
