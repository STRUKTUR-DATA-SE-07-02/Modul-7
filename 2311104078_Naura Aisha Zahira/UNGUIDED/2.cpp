#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

// Fungsi untuk membalik kata menggunakan stack
string reverseWord(string word) {
    stack<char> s;
    string reversedWord = "";

    // Masukkan setiap karakter ke dalam stack
    for (char c : word) {
        s.push(c);
    }

    // Pop setiap karakter dari stack untuk membalik urutannya
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }

    return reversedWord;
}

int main() {
    string input, word, result = "";
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, input);

    stringstream ss(input); // Untuk memisahkan kata-kata dalam kalimat

    // Proses setiap kata dalam kalimat
    while (ss >> word) {
        result += reverseWord(word) + " ";
    }

    cout << "Data stack Array:" << endl;
    cout << "Data: " << result << endl;

    return 0;
}
