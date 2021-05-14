//
// Created by Celeste Tan on 10/22/20.
//

#ifndef TEMPLATELINKLISTLAB_LINKEDLIST_H
#define TEMPLATELINKLISTLAB_LINKEDLIST_H

#include <iostream>
#include "Node.h"

template<class T>
class LinkedList {

public:
    LinkedList();

    T getTailData();
    T getHeadData();

    Node<T> *tail;
    Node<T> *head;

    Node<T> *createNode(T item);

    void insert(T item);

    void insertAfter(T item);

    void removeTail();

    void removeHead();

    T seek(int n);

    void insertBefore(T item);


    void insertMiddle(T item, T beforeThis);


    void before(T insertThis, T beforeThat);


    void checkSize();

   

    Node<T> *find(T item);

    bool empty();


    /**big 3**/
    LinkedList(const LinkedList<T> &l);

    ~LinkedList();


    LinkedList<T> &operator==(const LinkedList<T> &l);

    void clear();

//    void deleteNode(T item);

    void deleteNode(Node<T> *thisNode);
    template<class S>
    friend std::ostream &operator<<(std::ostream &out, const LinkedList<S> l);


    LinkedList &operator+=(const T &item);
//    void deleteNode(Node<T> *thisNode);


private:
    int size = 0;

    void beforeN(T insertThis, Node<T> *beforeThat);

    void remove(Node<T>*target);




};

#include "LinkedList.cpp"


#endif //TEMPLATELINKLISTLAB_LINKEDLIST_H
