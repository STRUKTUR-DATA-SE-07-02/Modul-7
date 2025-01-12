#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

void reverseWords(string sentence) {
    stack<string> wordStack;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        wordStack.push(word);
    }

    cout << "result : ";
    while (!wordStack.empty()) {
        string reversedWord = wordStack.top();
        wordStack.pop();

        for (int i = 0, j = reversedWord.length() - 1; i < j; i++, j--) {
            swap(reversedWord[i], reversedWord[j]);
        }

        cout << reversedWord << " ";
    }
    cout << endl;
}

int main() {
    string sentence;
    cout << "masukkan kalimat : ";
    getline(cin, sentence);

    reverseWords(sentence);

    return 0;
}