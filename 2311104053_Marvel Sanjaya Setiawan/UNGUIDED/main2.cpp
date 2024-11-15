#include <iostream>
#include <stack>
#include <sstream>

void reverseSentence(const std::string& sentence) {
    std::stack<std::string> s;
    std::string word;

    std::istringstream iss(sentence);
    // Memisahkan kalimat menjadi kata dan menyimpannya ke dalam stack
    while (iss >> word) {
        s.push(word);
    }

    // Mengeluarkan kata dari stack untuk membalikkan urutannya
    std::cout << "Kalimat setelah dibalik: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);

    reverseSentence(input);
    return 0;
}
