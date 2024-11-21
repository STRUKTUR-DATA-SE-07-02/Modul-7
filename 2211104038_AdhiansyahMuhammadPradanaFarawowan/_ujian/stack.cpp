#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        this->top = nullptr;
    }

    bool is_empty()
    {
        return this->top == nullptr;
    }

    void push(int x)
    {
        Node *new_node = new Node(x);
        new_node->next = this->top;
        this->top = new_node;
    }

    void pop()
    {
        if (is_empty())
        {
            std::cout << "Stack kosong" << '\n';
            return;
        }

        Node *temp = this->top;
        this->top = top->next;
        delete temp;
    }

    int peek()
    {
        if (!is_empty())
        {
            return this->top->data;
        }

        std::cout << "main.cpp: Stack is empty." << '\n';
        return -1;
    }

    void print_stack()
    {
        if (is_empty())
        {
            std::cout << "main.cpp: Stack is empty." << '\n';
            return;
        }

        Node *current = this->top;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << '\n';
    }
};

int main()
{
    Stack number_stack;
    number_stack.push(3);
    number_stack.push(5);
    number_stack.push(7);
    number_stack.push(11);
    number_stack.push(13);
    number_stack.push(17);

    std::cout << "Elemen-elemen tumpukan: ";
    number_stack.print_stack();

    std::cout << "Elemen teratas: " << number_stack.peek() << '\n';

    number_stack.pop();
    number_stack.pop();
    number_stack.pop();

    std::cout << "Elemen-elemen tumpukan setelah penghapusan: ";
    number_stack.print_stack();

    return 0;
}
