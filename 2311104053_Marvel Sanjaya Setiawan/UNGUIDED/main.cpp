//#include <iostream>
//#include <stack>
//#include <string>
//#include <cctype>
//
//bool isPalindrome(const std::string& str) {
//    std::stack<char> s;
//    std::string cleanedStr;
//
//    // Membersihkan string dan mengisi stack
//    for (char ch : str) {
//        if (std::isalnum(ch)) { // Memeriksa apakah karakter adalah alfanumerik
//            cleanedStr.push_back(std::tolower(ch)); // Menyimpan dalam bentuk lowercase
//            s.push(std::tolower(ch));
//        }
//    }
//
//    // Membandingkan karakter dari stack dengan string yang dibersihkan
//    for (char ch : cleanedStr) {
//        if (ch != s.top()) {
//            return false; // Jika tidak sama, bukan palindrom
//        }
//        s.pop();
//    }
//    return true; // Jika semua karakter sama, maka palindrom
//}
//
//int main() {
//    std::string input;
//    std::cout << "Masukkan kalimat: ";
//    std::getline(std::cin, input);
//
//    if (isPalindrome(input)) {
//        std::cout << "Kalimat tersebut adalah Palindrom." << std::endl;
//    } else {
//        std::cout << "Kalimat tersebut bukan Palindrom." << std::endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

// Fungsi untuk membalikkan huruf dalam setiap kata
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

        // Balikkan huruf dari currentWord
        string reversedWord(currentWord.rbegin(), currentWord.rend());
        cout << reversedWord << " ";
    }
    cout << endl;
}

int main() {
    string sentence;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    cout << "Datastack Array :" << endl;
    cout << "Data : ";
    reverseWordsInSentence(sentence);

    return 0;
}
