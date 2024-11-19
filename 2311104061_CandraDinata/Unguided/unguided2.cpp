#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

string reverseSentence(string sentence) {
    stack<string> s;
    string word, reversedSentence = "";
    stringstream ss(sentence);

    // Masukkan kata-kata ke dalam stack
    while (ss >> word) {
        s.push(word);
    }

    // Ambil kata-kata dari stack untuk membentuk kalimat terbalik
    while (!s.empty()) {
        reversedSentence += s.top();
        s.pop();
        if (!s.empty()) {
            reversedSentence += " ";
        }
    }

    return reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    string reversedResult = reverseSentence(sentence);
    cout << "Hasil: " << reversedResult << endl;

    return 0;
}