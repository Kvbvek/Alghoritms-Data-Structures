#include "bubblesort/bubblesort.h"
#include "binarysearch/binarysearch.h"
#include "linkedlist/linkedList.h"

int main(){
    TEST_binarySearchRecursive();
    TEST_bubbleSort();

    LinkedList<int> list;
    list.insertBack(12);
    list.printHead();
    list.insertBack(21);
    list.insertBack(51);
    list.printHead();
    list.insertFront(25);
    list.printHead();
    return 0;
}