#include "LinkedList.h"
#include <iostream>
#include<limits>
LinkedList::LinkedList(){
    head = nullptr;
    
}
LinkedList::LinkedList(int* array,int len){
    head = new Node();
    Node* tmp = head;
    for(int i=0;i < len;i++){
        Node* add = new Node();
        add->setData(array[i]);
        tmp->setNext(add);
        tmp = tmp->getNext();
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
           n->setNext(head->getNext());
           head->setNext(n);
           return;
        }
        int position=1;
        Node* n = head;
        while(position<pos){
            if(n->getNext() == nullptr){
                Node* newNode = new Node();
                newNode->setData(newNum);
                n->setNext(newNode);
                return;
            }
            n=n->getNext();
            position++;
        }
        Node* newNode=new Node();
        newNode->setData(newNum);
        newNode->setNext(n->getNext());
        n->setNext(newNode);
        return;
    }
bool LinkedList::deletePosition(int pos){
    if(pos<1){
        return false;
    }
    int position=0;
    Node* tmp=new Node();
    tmp->setNext(head);
    Node* del = head;
    while(del->getNext() != nullptr){
        tmp = tmp->getNext();
        del = del->getNext();
        position++;
        if(position>=pos){
            tmp->setNext(del->getNext());
            delete del;
            return true;
        }
    }
    
}

void LinkedList::printList(){
    Node* tmp = head;
    std::cout<<"[";
    while(tmp->getNext()!=nullptr){
        tmp=tmp->getNext();
        std::cout<<tmp->getData()<<" ";
    }
    std::cout<<"]";
    std::cout<<std::endl;
    return;
}
int LinkedList::get(int pos){
    if(pos<1){
        return std::numeric_limits<int>::max();
    }
    Node* tmp=head;
    int position = 0;
    while(tmp->getNext()!=nullptr){
        tmp=tmp->getNext();
        position++;
        if(position>=pos){
            return tmp->getData();
        }
    }
    return std::numeric_limits<int>::max();
}

int LinkedList::search(int target){
    int position=0;
    Node* n=head;
    while(n->getNext()!=nullptr){
        n=n->getNext();
        position++;
        if(n->getData()==target){
            return position;
        }
    }
    return -1;
}
