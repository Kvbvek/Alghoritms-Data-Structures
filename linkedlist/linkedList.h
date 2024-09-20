/*
These programs are made for practice with alghoritms
and data structures. It might contain some bugs.

Author: Jakub Brzazagacz
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor

#include "node.h"
#include <iostream>

template <typename T> class LinkedList{
    private:
        Node<T>* head;
    public:
        void print();
        void printHead();
        void insertBack(T dataToInsert);
        void insertFront(T dataToInsert);
        LinkedList(): head(nullptr){};

};

template <typename T>
void LinkedList<T>::print(){
    Node<T>* current = head;
    while(current != nullptr){
        std::cout << std::endl << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
};

template <typename T>
void LinkedList<T>::printHead(){
    std::cout << std::endl << head->data << " ";
};

template <typename T> 
void LinkedList<T>::insertBack(T dataToInsert){
    Node<T>* newNode = new Node<T>(dataToInsert);
    if(head == nullptr){
        head = newNode;
    } 
    else{
        Node<T>* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newNode;
    }
}

template <typename T> 
void LinkedList<T>::insertFront(T dataToInsert){
    Node<T>* newNode = new Node<T>(dataToInsert);
    if(head == nullptr){
        head = newNode;
    } 
    else{
        newNode->next = head;
        head = newNode;
    }
}

#endif