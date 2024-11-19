#include <iostream>
#include <stack>
#include <cctype> // Untuk fungsi isalnum dan tolower
using namespace std;

// Fungsi untuk mengecek apakah kalimat adalah palindrom
bool isPalindrome(const string& sentence) {
    stack<char> charStack;
    string normalized = "";

    // Normalisasi: hilangkan karakter non-alfanumerik dan ubah ke huruf kecil
    for (char ch : sentence) {
        if (isalnum(ch)) {
            normalized += tolower(ch); // Tambahkan karakter ke normalized
        }
    }

    // Masukkan setiap karakter ke dalam stack
    for (char ch : normalized) {
        charStack.push(ch);
    }

    // Bangun kembali string dari stack untuk membandingkan
    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    // Bandingkan kalimat asli yang dinormalisasi dengan versi terbalik
    return normalized == reversed;
}

int main() {
    string input;

    // Input dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Periksa apakah kalimat merupakan palindrom
    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}