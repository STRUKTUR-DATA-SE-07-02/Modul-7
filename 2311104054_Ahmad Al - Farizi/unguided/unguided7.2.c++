#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>

void reverseWords(const std::string& str) {
    std::stack<std::string> stack;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        stack.push(word);
    }

    std::cout << "Datastack Array :\n";

    std::stack<std::string> tempStack = stack;
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << "\n";

    std::cout << "Data : ";
    while (!stack.empty()) {
        std::string reversedWord = stack.top();
        std::reverse(reversedWord.begin(), reversedWord.end());
        std::cout << reversedWord << " ";
        stack.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::cout << "Masukkan Kata (minimal 3 kata): ";
    std::getline(std::cin, input);

    reverseWords(input);

    return 0;
}
