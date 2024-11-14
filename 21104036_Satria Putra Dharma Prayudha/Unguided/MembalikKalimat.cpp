#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

void reverseWords(string sentence) {
    stack<string> wordStack;
    stringstream ss(sentence);
    string word;

    // Memasukkan setiap kata ke dalam stack
    while (ss >> word) {
        wordStack.push(word);
    }

    // Mengeluarkan kata-kata dari stack dan membalikkan urutan setiap kata
    cout << "Hasil : ";
    while (!wordStack.empty()) {
        string reversedWord = wordStack.top();
        wordStack.pop();

        // Membalikkan setiap kata
        for (int i = 0, j = reversedWord.length() - 1; i < j; i++, j--) {
            swap(reversedWord[i], reversedWord[j]);
        }

        cout << reversedWord << " ";
    }
    cout << endl;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    reverseWords(sentence);

    return 0;
}
