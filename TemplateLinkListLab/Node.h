//
// Created by Celeste Tan on 10/22/20.
//

#ifndef TEMPLATELINKLISTLAB_NODE_H
#define TEMPLATELINKLISTLAB_NODE_H

template<class T>
struct Node {
    Node<T> *next;
    Node<T> *prev;
    T data;


};


#endif //TEMPLATELINKLISTLAB_NODE_H
