#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str) {

    string filtered = "";
    for (char ch : str) {
        if (isalnum(ch)) {
            filtered += tolower(ch);
        }
    }

    string rev = filtered;
    reverse(rev.begin(), rev.end());


    if (filtered == rev)
        cout << "Palindrome." << endl;
    else
        cout << "Bukan Palindrome." << endl;
}

int main() {
    string inputString;
    cout << "Masukkan kalimat: ";
    getline(cin, inputString);

    cout << "Kalimat tersebut adalah: ";
    isPalindrome(inputString);

    return 0;
}
