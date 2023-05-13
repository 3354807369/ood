#include "Node.h"

Node::Node(){
    Link=nullptr;
    return;
}

int Node::getData(){
    return data;
}
void Node::setData(int newData){
    data=newData;
    return;
}

Node* Node::getNext()
{
    return Link;
}
void Node::setNext(Node *n){
    Link=n;
}