#include <iostream>
#include <stack>
#include <sstream> // Untuk memisahkan kata-kata dalam kalimat
using namespace std;

// Fungsi untuk membalikkan string menggunakan stack
string reverseString(string word) {
    stack<char> charStack; // Stack untuk karakter
    string reversedWord = "";

    // Memasukkan setiap karakter ke dalam stack
    for (char c : word) {
        charStack.push(c);
    }

    // Mengambil karakter dari stack untuk membalikkan string
    while (!charStack.empty()) {
        reversedWord += charStack.top();
        charStack.pop();
    }

    return reversedWord;
}

// Fungsi untuk membalikkan kalimat per kata
string reverseSentence(string sentence) {
    stringstream ss(sentence); // Untuk memisahkan kata dalam kalimat
    string word;
    string result = "";

    // Membaca setiap kata dari kalimat
    while (ss >> word) {
        result += reverseString(word) + " "; // Membalikkan setiap kata
    }

    return result;
}

int main() {
    string sentence;

    // Input kalimat dari pengguna
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    // Validasi jumlah kata
    stringstream ss(sentence);
    int wordCount = 0;
    string temp;
    while (ss >> temp) {
        wordCount++;
    }

    if (wordCount < 3) {
        cout << "Kalimat harus memiliki minimal 3 kata!" << endl;
    } else {
        // Membalikkan kalimat
        string result = reverseSentence(sentence);
        cout << "Hasil: " << result << endl;
    }

    return 0;
}
