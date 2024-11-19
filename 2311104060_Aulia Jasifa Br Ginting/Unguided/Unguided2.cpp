#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk membalik kata individual
string reverseWord(string str) {
    stack<char> s;
    
    // Push semua karakter ke dalam stack
    for (int i = 0; i < str.length(); i++)
        s.push(str[i]);
    
    // Pop karakter dari stack dan susun kembali
    string reversedWord = "";
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }
    
    return reversedWord;
}

// Fungsi untuk membalik kalimat
string reverseSentence(string str) {
    string word = "";
    string result = "";
    
    // Tambahkan spasi di akhir string untuk memproses kata terakhir
    str = str + " ";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            // Balik kata individual dan tambahkan ke hasil
            result = reverseWord(word) + " " + result;
            word = "";
        }
        else {
            word += str[i];
        }
    }
    
    // Hapus spasi di akhir hasil
    return result.substr(0, result.length() - 1);
}

int main() {
    string input;
    cout << "Masukkan Kata: ";
    getline(cin, input);
    
    cout << "Datastack Array : " << endl;
    cout << "Data : " << reverseSentence(input) << endl;
    
    return 0;
}