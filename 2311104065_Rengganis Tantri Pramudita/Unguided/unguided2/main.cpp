#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Stack {
private:
   int top;
   string arr[100]; // Array untuk menyimpan kata

public:
   Stack() {
       top = -1;
   }

   void push(string data) {
       arr[++top] = data;
   }

   bool isEmpty() {
       return top == -1;
   }

   string pop() {
       if(!isEmpty())
           return arr[top--];
       return "";
   }
};

int main() {
   Stack s;
   string input;
   string word = "";

   cout << "Masukkan Kata ";
   getline(cin, input);

   // Memisahkan kata dan push ke stack
   for(char c : input) {
       if(c == ' ') {
           if(word != "") {
               s.push(word);
               word = "";
           }
       } else {
           word = c + word; // Membalik karakter dalam kata
       }
   }
   // Push kata terakhir
   if(word != "") {
       s.push(word);
   }

   cout << "Datastack Array : " << endl;
   cout << "Data : ";

   // Pop dan tampilkan kata
   while(!s.isEmpty()) {
       cout << s.pop() << " ";
   }
   cout << endl;

   return 0;
}
