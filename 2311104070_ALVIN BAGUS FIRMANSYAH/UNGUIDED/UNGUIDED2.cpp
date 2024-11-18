#include <iostream>
#include <stack>
#include <sstream>  // Untuk istringstream
#include <vector>
using namespace std;

void reverseSentence(string sentence) {
    stack<string> words;
    string word;

    // Memecah kalimat menjadi kata-kata dan memasukkan ke stack
    istringstream iss(sentence);
    while (iss >> word) {
        words.push(word);
    }

    // Mencetak kata-kata dari stack (dalam urutan terbalik)
    cout << "Kalimat setelah dibalik: ";
    while (!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
    cout << endl;
}

int main() {
    string input;

    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, input);

    reverseSentence(input);  // Memanggil fungsi untuk membalikkan kalimat

    return 0;
}
