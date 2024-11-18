#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>

using namespace std;

string reverseWord(string word) {
    stack<char> charStack;

    for (char c : word) {
        charStack.push(c);
    }

    string reversedWord = "";
    while (!charStack.empty()) {
        reversedWord += charStack.top();
        charStack.pop();
    }

    return reversedWord;
}

string reverseSentenceWithWords(string sentence) {
    stack<string> wordStack;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        wordStack.push(reverseWord(word));  
    }

    string reversedSentence = "";
    while (!wordStack.empty()) {
        reversedSentence += wordStack.top();
        wordStack.pop();
        if (!wordStack.empty()) {
            reversedSentence += " ";
        }
    }

    return reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat minimal 3 kata: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    int wordCount = 0;
    string temp;
    while (ss >> temp) {
        wordCount++;
    }

    if (wordCount < 3) {
        cout << "Kalimat harus minimal 3 kata." << endl;
    } else {
        cout << "Kalimat yang dibalik (termasuk kata-katanya): " << reverseSentenceWithWords(sentence) << endl;
    }

    return 0;
}
