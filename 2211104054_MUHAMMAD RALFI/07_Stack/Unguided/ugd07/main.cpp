// pengecekan teks apakah palindrome atau tidak
/*#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str) {

    string rev = str;

    reverse(rev.begin(), rev.end());
    if (str == rev)
        cout << "Palindrome." << endl;
    else
        cout << "Bukan Palindrome." << endl;
}

int main() {
    string inputString;
    cout << "Masukkan kalimat: ";
    getline(cin, inputString);
    cout << "Kalimat tersebut adalah : ", isPalindrome(inputString);

    return 0;
}*/


// Reverse Kalimat
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string inputString;
    cout << "Masukan kalimat: ";
    getline(cin, inputString);
    reverse(inputString.begin(), inputString.end());
	cout<<"Hasil: "<<inputString;
    return 0;
}
