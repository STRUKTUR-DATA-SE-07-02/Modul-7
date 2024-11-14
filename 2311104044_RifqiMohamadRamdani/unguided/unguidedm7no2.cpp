#include <iostream>
#include <stack>
using namespace std;

void balikKalimat(string kalimat) {
    stack<char> s;

    cout << "Datastack Array :" << endl;

    for (char ch : kalimat) {
        s.push(ch);
    }

    cout << "Data : ";

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    string kalimat;
    cout << "Masukkan Kalimat (minimal 3 kata): ";
    getline(cin, kalimat);

    balikKalimat(kalimat);

    return 0;
}
