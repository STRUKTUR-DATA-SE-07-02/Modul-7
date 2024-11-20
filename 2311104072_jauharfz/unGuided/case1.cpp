#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool cekPalindrom(string str)
{
    stack<char> st;
    string cleanStr = "";

    // Membersihkan string dan mengubah ke lowercase
    for (char c : str)
    {
        if (isalpha(c))
        {
            cleanStr += tolower(c);
        }
    }

    // Push semua karakter ke stack
    for (char c : cleanStr)
    {
        st.push(c);
    }

    // Bandingkan karakter asli dengan yang di stack
    for (char c : cleanStr)
    {
        if (c != st.top())
        {
            return false;
        }
        st.pop();
    }

    return true;
}

int main()
{
    string kalimat;

    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);

    cout << "Kalimat tersebut adalah : ";
    if (cekPalindrom(kalimat))
    {
        cout << "Palindrom" << endl;
    }
    else
    {
        cout << "bukan Palindrom" << endl;
    }

    return 0;
}
