﻿#include <iostream>

using namespace std;

template <typename T>

class List
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node* previous;
    };

    int size;
    Node* head;
    Node* tail;


public:
    List()
    {
        size = 0;
        head = nullptr;
        tail = nullptr;

    };

    void push_back(T data)
    {

    }

    void push_front(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;

        if (head == nullptr)
        {
            head = newNode;

            newNode->next = nullptr;
        }
        else
        {
            newNode->next = head;

            head = newNode;
        }

        size++;
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "Linked List is empty" << endl;
        }
        else
        {
            Node* deleteNode = head->next;

            if head == head->next)
            {
                head == nullptr;
            }
            else
            {
                head->next = deleteNode->next;
            }

            delete deleteNode;

            size--
        }
    }

    void pop_back()
    {
        if (head == nullptr)
        {
            cout << "Linked List is empty" << endl;
        }
        else
        {
            Node* deleteNode = head;
            Node* currentNode = head;

            if (head == head->next)
            {
                head = nullptr;
            }
            else
            {
                for (int i = 0; i < size - 1; i++)
                {
                    currentNode = currentNode->next;
                }

                currentNode->next = head->next;

                head = currentNode;
            }

            delete deleteNode;

            size--

        }
    }


    const bool& empty()
    {
        return head == nullptr;
    }

    ~List()
    {
        while (head != nullptr)
        {
            pop_front();
        }
    }
};




int main()
{
    List<int> list;

    list.push_front(5);
    list.push_front(1);



    return 0;

}