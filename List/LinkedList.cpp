#include "LinkedList.h"

template<typename T>
LinkedListNode<T>::LinkedListNode() {
    this->next = nullptr;
}

template<typename T>
LinkedListNode<T>::LinkedListNode(T v) {
    this->next = nullptr;
    this->value = v;
}

template<typename T>
LinkedListNode<T>::LinkedListNode(T v, LinkedListNode<T> *next) {
    this->next = next;
    this->value = v;
}

template<typename T>
void LinkedListNode<T>::append(LinkedListNode<T> *node) {
    this->next = node;
}

template<typename T>
LinkedListNode<T>::LinkedListNode(const LinkedListNode<T> &node) {
    this->next = node.next;
    this->value = node.value;
}



template<typename T>
LinkedList<T>::LinkedList() {
    this->head = new LinkedListNode<T>;
}

template<typename T>
void LinkedList<T>::operator+=(LinkedListNode<T> *node) {
    this->last()->next = node;
}

template<typename T>
void LinkedList<T>::operator+=(LinkedList<T> list) {
    this->last()->next = list.head->next;
}

template<typename T>
LinkedListNode<T> *LinkedList<T>::last() {
    LinkedListNode<T> *p = this->head;
    while (p->next) p = p->next;
    return p;
}

template<typename T>
int LinkedList<T>::size() {
    int count = 0;
    LinkedListNode<T> *p = this->head;
    while (p->next) {
        p = p->next;
        count++;
    }
    return count;
}

template<typename T>
void LinkedList<T>::operator+=(T value) {
    auto *node = new LinkedListNode<T>(value);
    (*this) += node;
}
