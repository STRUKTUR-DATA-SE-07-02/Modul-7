#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk membalikkan kalimat menggunakan stack
string reverseSentence(string sentence) {
    stack<char> charStack; // Stack untuk menyimpan karakter
    string reversed = "";  // String untuk menyimpan hasil pembalikan

    // Masukkan setiap karakter ke dalam stack
    for (char ch : sentence) {
        charStack.push(ch);
    }

    // Keluarkan karakter dari stack untuk membentuk string terbalik
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    return reversed;
}

int main() {
    string sentence;

    // Input dari pengguna
    cout << "Masukkan kata (minimal 3 kata): ";
    getline(cin, sentence);

    // Proses pembalikan kalimat
    string result = reverseSentence(sentence);

    // Tampilkan hasil
    cout << "Datastack Array:" << endl;
    cout << "Data: " << result << endl;

    return 0;
}