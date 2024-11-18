#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    stack<char> charStack;
    string sentence, reversedSentence = "";

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    for (char c : sentence) {
        charStack.push(c);
    }

    while (!charStack.empty()) {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    cout << "Hasil: " << reversedSentence << endl;

    return 0;
}
