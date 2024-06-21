#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

template <class T>
class Stack {
private:
    struct Node {
        T key;
        Node* pNext;
    };
    Node* pHead;
    Node* pTail;
    size_t numOfElements;

    Node* Stack<T>::createNode(T data) {
        Node* newNode = new (std::nothrow) Node;
        if (!newNode) {
            throw std::invalid_argument("Can't allocate");
        }
        newNode->key = data;
        newNode->pNext = nullptr;
        return newnNode;
    }    
public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(T val);
    size_t size();
    void pop():
    T front();
};

#endif