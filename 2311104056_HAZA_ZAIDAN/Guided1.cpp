#include <iostream>

using namespace std;

// Struktur Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Kelas Stack yang menggunakan linked list
class Stack {
private:
    Node* top;  // Pointer ke node teratas

public:
    // Konstruktor: Inisialisasi top dengan nullptr (tumpukan kosong)
    Stack() {
        top = nullptr;
    }

    // Mengecek apakah tumpukan kosong
    bool isEmpty() {
        return top == nullptr;
    }

    // Menambahkan elemen ke tumpukan
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    // Menghapus elemen teratas dari tumpukan
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Mengembalikan elemen teratas tanpa menghapusnya
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1; // Mengembalikan nilai sentinel jika tumpukan kosong
        }
        return top->data;
    }

    // Menampilkan semua elemen tumpukan
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "After popping, stack elements: ";
    s.display();

    return 0;
}