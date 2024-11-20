#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseCharacters(string sentence) {
    stack<char> charStack;

    // Push setiap karakter ke stack
    for (char c : sentence) {
        charStack.push(c);
    }

    // Pop karakter dari stack untuk membalik urutan
    cout << "Kalimat setelah dibalik: ";
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    reverseCharacters(input);

    return 0;
}
