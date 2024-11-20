#include <algorithm> 
#include<iostream> 
#include<string>

using namespace std; int main(){
string inputString;
cout << "Masukan kalimat: "; getline(cin, inputString);
reverse(inputString.begin(), inputString.end()); cout<<"Hasil: "<<inputString;
return 0;
}
