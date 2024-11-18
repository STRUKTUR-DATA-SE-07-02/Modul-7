#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::stack<char> stack;
    std::string cleaned = "";

    for (char c : str) {
        if (std::isalnum(c)) {
            cleaned += std::tolower(c);
        }
    }

    for (char c : cleaned) {
        stack.push(c);
    }

    for (char c : cleaned) {
        if (stack.top() != c) {
            return false;
        }
        stack.pop();
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Masukan Kalimat : ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Kalimat tersebut adalah : Palindrom\n";
    } else {
        std::cout << "Kalimat tersebut adalah : Bukan Palindrom\n";
    }

    return 0;
}
