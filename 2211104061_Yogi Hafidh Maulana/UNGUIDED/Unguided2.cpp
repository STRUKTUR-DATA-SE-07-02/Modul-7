#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseSentence(const string &sentence)
{
    stack<char> charStack;
    string reversedSentence;

    for (char ch : sentence)
    {
        charStack.push(ch);
    }

    while (!charStack.empty())
    {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    return reversedSentence;
}

int main()
{
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    string result = reverseSentence(sentence);

    cout << "Hasil: " << result << endl;

    return 0;
}
