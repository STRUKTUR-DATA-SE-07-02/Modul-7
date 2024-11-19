#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string sentence) {
    // Hilangkan spasi dan ubah ke huruf kecil
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    stack<char> s;
    
    // Masukkan huruf-huruf ke dalam stack
    for (char c : sentence) {
        s.push(c);
    }

    string reversedSentence = "";
    while (!s.empty()) {
        reversedSentence += s.top();
        s.pop();
    }

    // Bandingkan string asli dan string terbalik
    return sentence == reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut bukan Palindrom" << endl;
    }

    return 0;
}