#include <iostream>
#include <stack>
#include <sstream> // Untuk memisahkan kata-kata
#include <string>

using namespace std;

string reverseWord(const string& word) {
    stack<char> s;
    string reversedWord;

    // Memasukkan setiap karakter kata ke dalam stack
    for (char c : word) {
        s.push(c);
    }

    // Mengeluarkan karakter dari stack (membalik kata)
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }

    return reversedWord;
}

string reverseSentence(const string& sentence) {
    stringstream ss(sentence); // Membantu memisahkan kata-kata
    string word;
    string result;

    // Membalik setiap kata dalam kalimat
    while (ss >> word) {
        result += reverseWord(word) + " "; // Membalikkan kata dan menambahkan spasi
    }

    return result;
}

int main() {
    string input;

    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, input); // Mengambil input dari pengguna

    string reversedSentence = reverseSentence(input);

    cout << "Datastack Array: " << reversedSentence << endl;

    return 0;
}
