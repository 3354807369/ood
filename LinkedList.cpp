#include "LinkedList.h"
#include <iostream>
#include<limits>
LinkedList::LinkedList(){
    head = new Node();
    return;
}
LinkedList::LinkedList(int* array,int len){
    head = new Node();
    Node* tmp = head;
    for(int i=0;i < len;i++){
        Node* add = new Node();
        add->setData(array[i]);
        tmp = add;
    }
    return;
}
LinkedList::~LinkedList(){
    Node* tmp=new Node();
    Node* del = head->getNext();
    while(del->getNext()!=nullptr){
      del = del->getNext();
      tmp = tmp->getNext();

        }
        tmp->setNext(nullptr);
        delete del;
        return;
    }
    void LinkedList::insertPosition(int pos,int newNum){
        if(pos <= 1){
           Node* n=new Node();
           n->setData(newNum);
           n->setLink(head->getLink());
           head->setLink(n);
           return;
        }
        int position=1;
        Node* n = head;
        while(position<pos){
            if(n->getLink() == nullptr){
                Node* newNode = new Node();
                newNode->setData(newNum);
                n->setLink(newNode);
                return;
            }
            n=n->getLink();
            position++;
        }
        Node* newNode=new Node();
        newNode->setData(newNum);
        newNode->setLink(n->getLink());
        n->setLink(newNode);
        return;
    }
bool LinkedList::deletePosition(int pos){
    if(pos<1){
        return false;
    }
    int position=0;
    Node* tmp=new Node();
    tmp->setLink(head);
    Node* del = head;
    while(del->getLink() != nullptr){
        tmp = tmp->getLink();
        del = del->getLink();
        position++;
        if(position>=pos){
            tmp->setLink(del->getLink());
            delete del;
            return true;
        }
    }
    return -1;
}

void LinkedList::printList(){
    Node* tmp = head;
    while(tmp->getLink()!=nullptr){
        tmp=tmp->getLink();
        std::cout<<"["<<tmp->getData()<<"]"<<" ";

    }
    std::cout<<std::endl;
    return;
}