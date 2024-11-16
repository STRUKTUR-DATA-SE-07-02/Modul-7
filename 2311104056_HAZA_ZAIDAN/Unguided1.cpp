#include <iostream>
#include <stack>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str) {
    std::stack<char> stack;
    std::string cleanedStr;

    for (char ch : str) {
        if (std::isalnum(ch)) {
            cleanedStr += tolower(ch);
            stack.push(tolower(ch));
        }
    }

    for (char ch : cleanedStr) {
        if (ch != stack.top()) {
            return false;
        }
        stack.pop();
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Kalimat tersebut adalah Palindrome.\n";
    } else {
        std::cout << "Kalimat tersebut bukan Palindrome.\n";
    }

    return 0;
}