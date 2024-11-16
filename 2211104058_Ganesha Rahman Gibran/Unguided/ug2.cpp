#include <iostream>
#include <stack>
#include <string>

std::string reverseString(const std::string &input) {
    std::stack<char> charStack;
    std::string reversed;

    for (char ch : input) {
        charStack.push(ch);
    }

    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    return reversed;
}

int main() {
    std::string input;

    std::cout << "Masukkan Kata: ";
    std::getline(std::cin, input);

    std::string reversed = reverseString(input);

    std::cout << "Data Array: ";
    for (char ch : reversed) {
        std::cout << ch << " "; 
    }
    std::cout << "\nData: " << reversed << std::endl;

    return 0;
}
