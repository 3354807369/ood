#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{
    public:
    LinkedList();
    LinkedList(int* array,int len);
    ~LinkedList();
    void insertPosition(int pos,int newNum);
    bool deletePosition(int position);
    int get(int pos);
    int search(int target);
    void printList();
    private:
    Node* head;
    int position;
};
#endif