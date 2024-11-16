#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &input) {
    std::stack<char> charStack;
    std::string cleanedInput;

    for (char ch : input) {
        if (isalnum(ch)) {
            cleanedInput += tolower(ch);
        }
    }

    for (char ch : cleanedInput) {
        charStack.push(ch);
    }

    for (char ch : cleanedInput) {
        if (ch != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true; 
}

int main() {
    std::string input;
    
    std::cout << "Masukkan Kalimat: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Kalimat tersebut adalah: Polindrom" << std::endl;
    } else {
        std::cout << "Kalimat tersebut adalah: Non-Polindrom" << std::endl;
    }

    return 0;
}
