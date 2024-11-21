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

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_at_first(int data) {
        Node *new_node = new Node(data);
        if (this->head == nullptr)
        {
            this->head = new_node;
            this->tail = new_node;

            return;
        }

        new_node->next = this->head;
        this->head = new_node;
    }

    void insert_at_last(int data)
    {
        Node *new_node = new Node(data);
        if (this->head == nullptr)
        {
            this->head = new_node;
            this->tail = new_node;

            return;
        }

        this->tail->next = new_node;
        this->tail = this->tail->next;
    }

    void delete_at_first() {
        if (this->head == nullptr)
        {
            std::cout << "main.cpp: Linked list is empty." << '\n';
            return;
        }

        Node *to_be_deleted;
        to_be_deleted = this->head;
        this->head = this->head->next;
        delete to_be_deleted;
    }

    void delete_at_last() {
        if (this->tail == nullptr)
        {
            std::cout << "main.cpp: Linked list is empty." << '\n';
            return;
        }

        if (this->tail == this->head) {
            Node* to_be_deleted = this->tail;
            this->tail = nullptr;
            this->head = nullptr;

            delete to_be_deleted;
            return;
        }

        Node* before_last = this->head;
        while (before_last->next != this->tail)
        {
            before_last = before_last->next;
        }

        Node* to_be_deleted = this->tail;
        this->tail = before_last;
        this->tail->next = nullptr;
        delete to_be_deleted;
    }

    int search_position(int data)
    {
        if (this->head == nullptr)
        {
            return -1;
        }

        int current_position = 0;
        Node *current = this->head;
        while (current != nullptr)
        {
            current_position = current_position + 1;
            if (data == current->data) {
                return current_position;
            }
            current = current->next;
        }

        return -1;
    }

    void print_all()
    {
        if (this->head == nullptr)
        {
            std::cout << "main.cpp: Linked list is empty." << '\n';
            return;
        }

        Node *current = this->head;
        while (current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }

        std::cout << "NULL" << '\n';
    }

    int number_of_nodes()
    {
        if (this->head == nullptr)
        {
            return -1;
        }
        else
        {
            int counts = 0;
            Node *current = this->head;
            while (current != nullptr)
            {
                counts = counts + 1;
                current = current->next;
            }

            return counts;
        }
    }
};

int main()
{
    LinkedList *number_list = new LinkedList();
    number_list->insert_at_last(5);
    number_list->insert_at_first(11);
    number_list->insert_at_last(17);
    number_list->insert_at_first(23);
    number_list->delete_at_last();

    std::cout << "Number of nodes: " << number_list->number_of_nodes() << '\n';
    std::cout << "Position of searched data: " << number_list->search_position(3) << '\n';
    
    number_list->print_all();
}
