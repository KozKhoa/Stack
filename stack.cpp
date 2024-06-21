#include "stack.h"

template <class T>
Stack<T>::Stack() {
    pHead = pTail = nullptr;
    numOfElements = 0;
}
template <class T>
Stack<T>::~Stack() {
    pHead = pTail = nullptr;
    numOfElements = 0;
}
// isEmpty;
template <class T>
bool Stack<T>::isEmpty() {
    if (!pHead || !pTail) {
        return true;
    }
    return false;
}
// size;
template <class T>
size_t Stack<T>::size() {
    return numOfElements;
}
// push;
template <class T>
void Stack<T>::push(T val) {
    Node* newNode = createNode(val);
    if (isEmpty()) {
        pTail = newNode;
    }
    newNode->pNext = pHead;
    pHead = newNode;
}
// pop;
template <class T>
void Stack<T>::pop() {
    if (!isEmpty()) {
        Node* del = pHead;
        pHead = pHead->pNext;
        delete del;
        if (!pHead) {
            pTail = nullptr;
        }
    }
}
// front
template <class T>
T Stack<T>::front() {
    
}