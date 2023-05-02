#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "music.hpp"
#include "node.hpp"
using namespace std ;
template <typename T>
class LinkedList
{

    int m_size = 0;

public:
    Node<T> *first;
    LinkedList()
    {
        first = nullptr;
    }
    ~LinkedList()
    {
        Node<T> *now = first;
        while (now != nullptr)
        {
            Node<T> *next = now->next;
            delete now;
            now = next;
        }
    }

    int size() { return m_size; }

    void add(T obj)
    {
        Node<T> *newNode = new Node<T>;
        newNode->value = obj;
        newNode->next = nullptr;
        if (first == nullptr)
        {
            first = newNode;
        }
        else
        {
            newNode->next = first;
            first = newNode;
        }
        m_size++;
    }
    void remove(int index)
    {
        if (index == 0)
        {
            Node<T> *newFirst = first->next;
            delete first;
            first = newFirst;
        }
        Node<T> *last = nullptr;
        Node<T> *now = first;

        for (int i = 0; i < index && now != nullptr; i++)
        {
            last = now;
            now = now->next;
        }
        if (now == nullptr)
        {
            return;
        }
        if (last == nullptr)
        {
            first = now->next;
        }
        else
        {
            last->next = now->next;
        }
        m_size--;
        delete now;
    }
    void print()
    {
        cout << "Esses sao os elementos da lista: " << endl;
        Node<T> *v = first;
        while (v != nullptr)
        {
            cout << v->value << endl;
            v = v->next;
        }
    }

    T get(int index)
    {
        Node<T> *runner = first;
        for (int i = 0; i < index; i++)
        {
            runner = runner->next;
        }
        return runner->value;
    }
};

#endif