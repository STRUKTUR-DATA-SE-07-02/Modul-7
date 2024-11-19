#include <iostream>
#define MAX 100

using namespace std;

class Stack {
private:
    char data[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX-1);
    }

    void push(char x) {
        if(!isFull()) {
            top++;
            data[top] = x;
        }
    }

    char pop() {
        char x = '\0';
        if(!isEmpty()) {
            x = data[top];
            top--;
        }
        return x;
    }
};

int main() {
    Stack stack;
    char str[MAX];
    char temp[MAX];
    int i, j = 0;
    bool isPalindrome = true;

    cout << "Masukan Kalimat : ";
    cin.getline(str, MAX);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                temp[j] = str[i] + 32;
            } else {
                temp[j] = str[i];
            }
            j++;
        }
    }
    temp[j] = '\0';

    for(i = 0; i < j/2; i++) {
        stack.push(temp[i]);
    }

    if(j % 2 != 0) {
        i++;
    }

    while(i < j) {
        if(stack.pop() != temp[i]) {
            isPalindrome = false;
            break;
        }
        i++;
    }

    cout << "Kalimat tersebut adalah : ";
    if(isPalindrome) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Bukan Palindrom" << endl;
    }

    return 0;
}
