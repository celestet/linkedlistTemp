//
// Created by Celeste Tan on 10/22/20.
//

#ifndef TEMPLATELINKLISTLAB_LINKEDLIST_CPP
#define TEMPLATELINKLISTLAB_LINKEDLIST_CPP

#include "LinkedList.h"


template<class T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

template<class T>
void LinkedList<T>::insertAfter(T item) {
    Node<T> *temp = createNode(item);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

template<class T>
Node<T> *LinkedList<T>::createNode(T item) {
    Node<T> *n = new Node<T>;
    n->data = item;
    n->next = nullptr;
    n->prev = nullptr;
    return n;
}

template<class T>
LinkedList<T> &LinkedList<T>::operator+=(const T &item) {
    insert(item);
    return *this;
}

template<class T>
void LinkedList<T>::insertBefore(T item) {
    Node<T> *n = createNode(item);
    if (n == nullptr) {


        head == n;
    } else {
        n->next = head;
        head = n;

    }
}


template<class T>
void LinkedList<T>::insert(T item) {
    Node<T> *temp = createNode(item);
    if (head == nullptr) {
        head == temp;
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;

    }
}

template<class T>
std::ostream &operator<<(std::ostream &out, const LinkedList<T> l) {
    for (Node<T> *walk = l.head; walk != nullptr; walk = walk->next) {
        out.width(5);
        out << walk->data;


    }

    return out;
}


template<class T>
void LinkedList<T>::insertMiddle(T item, T beforeThis) {
    before(item, beforeThis);
}


template<class T>
void LinkedList<T>::before(T insertThis, T beforeThat) {
    Node<T> *target = find(beforeThat);
    beforeN(insertThis, target);
}

//try no recursion
template<class T>
void LinkedList<T>::beforeN(T insertThis, Node<T> *beforeThat) {
    if (beforeThat != nullptr) {
        if (head == tail || beforeThat == head) {
            insertBefore(insertThis);
        } else {
            Node<T> *node = createNode(insertThis);
            node->next = beforeThat;
            node->prev = beforeThat->prev;
            (beforeThat->prev)->next = node;
            beforeThat->prev = node;


        }

    }
}



template<class T>
Node<T> *LinkedList<T>::find(T item) {
    Node<T> *here = head;
    while (here != nullptr && here->data != item) {
        here = here->next;

    }
    return here;
}

template<class T>
bool LinkedList<T>::empty() {
    if (head == nullptr) {
        return true;
    } else {
        return false;
    }
}

template<class T>
void LinkedList<T>::checkSize() {
    int size = 0;
    for (Node<T> *walk = head; walk != nullptr; walk->next) {
        size++;
    }
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList<T> &l):LinkedList() {
    *this = l;
}

template<class T>
LinkedList<T>::~LinkedList() {
//    clear();

}


template<class T>
LinkedList<T> &LinkedList<T>::operator==(const LinkedList<T> &l) {
    clear();
    Node<T> *walker = l.head;
    size = 0;
    while (walker != nullptr) {
        insert(walker->data);
        walker = walker->next;
    }
    return *this;
}

template<class T>
void LinkedList<T>::clear() {
    Node<T> *walker = head;
    Node<T> *previous;
    while (walker != nullptr) {
        previous = walker;
        walker = walker->next;
        delete previous;
    }
    head = nullptr;
    tail = nullptr;
}


//template<typename T>
//void LinkedList<T>::deleteNode(T item) {
//
////        Node<T>* target =find(item);
////        Node<T>* tprev = target->prev;
////        Node<T>* tnext = target->next;
////        tprev->next= tnext;
////        tnext->prev = tprev;
////        delete target;
//remove(find(item));
//
//}

template<typename T>
void LinkedList<T>::deleteNode(Node<T>* thisNode) {
    if(thisNode == head){
        head=  thisNode->next;
        head->prev = NULL;
        delete thisNode;
        size--;
        std::cout << "deleting head node";
    }
    else if(thisNode == tail){
        tail = tail->prev;
        tail->next = NULL;
        delete  thisNode;
        size--;
    }
    else{
//        std::cout << "\ndeleting node unknown case\n";
    }
}

template<class T>
void LinkedList<T>::removeHead(){
    deleteNode(head);
}


//template<typename T>
//void LinkedList<T>::remove(Node<T>*target){
//    Node<T> *tprev = target->prev;
//    Node<T> *tnext = target->next;
//    if(target != nullptr){
//        if(tail == head){
//            head == nullptr;
//            tail = nullptr;
//        }
//        else if(target == head){
//            head = head -> next;
//            head->prev = nullptr;
//        }
//        if(target == tail){
//            tprev->next = nullptr;
//            tail= tprev;
//        }
//        else {
//
//
//            tprev->next = tnext;
//            tnext->prev = tprev;
//
//        }
//        delete target;
//
//    }
//}

#endif