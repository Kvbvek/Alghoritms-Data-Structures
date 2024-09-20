/*
These programs are made for practice with alghoritms
and data structures. It might contain some bugs.

Author: Jakub Brzazagacz
*/

#ifndef NODE_H
#define NODE_H

template <typename T> class Node {
    public:
        T data;
        Node<T>* next;
        Node(T val): data(val), next(nullptr){};

};

#endif