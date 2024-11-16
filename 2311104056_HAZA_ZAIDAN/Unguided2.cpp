#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

// Fungsi untuk membalikkan sebuah string
string reverseString(const string& str) {
    string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

// Fungsi untuk membalikkan huruf dalam setiap kata dalam sebuah kalimat
void reverseWordsInSentence(const string& sentence) {
    stack<string> wordsStack;
    stringstream ss(sentence);
    string word;

    // Memisahkan kata-kata dan memasukkannya ke dalam stack
    while (ss >> word) {
        wordsStack.push(word);
    }

    // Mengeluarkan kata-kata dari stack dan membalikkan hurufnya
    while (!wordsStack.empty()) {
        string currentWord = wordsStack.top();
        wordsStack.pop();
        cout << reverseString(currentWord) << " ";
    }
    cout << endl;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    cout << "Datastack Array: " << endl;
    cout << "Data : ";
    reverseWordsInSentence(sentence);

    return 0;
}