#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(const string &sentence)
{
    stack<char> charStack;
    string cleanedSentence;

    for (char ch : sentence)
    {
        if (isalnum(ch))
        {
            cleanedSentence += tolower(ch);
            charStack.push(tolower(ch));
        }
    }

    string reversedSentence;
    while (!charStack.empty())
    {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    return cleanedSentence == reversedSentence;
}

int main()
{
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence))
    {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    }
    else
    {
        cout << "Kalimat tersebut adalah bukan palindrom" << endl;
    }

    return 0;
}
