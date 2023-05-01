#include "Node.h"

Node::Node(){
    Link=nullptr;
    return;
}
Node::Node(int newData){
    Link=nullptr;
    data=newData;
    return;
}
int Node::getData(){
    return data;
}
void Node::setData(int newData){
    data=newData;
    return;
}
Node* Node::getLink(){
    return Link;
}
void Node::setLink(Node* newLink){
    Link=newLink;
    return;
}
Node* Node::getNext()
{
    return Link;
}