#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

void reverseSentence(string str) {
    stack<string> s;
    string word;

    stringstream ss(str);
    while (ss >> word) {
        s.push(word);
    }

    cout << "Kalimat setelah dibalik: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, input);

    reverseSentence(input);

    return 0;
}