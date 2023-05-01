#ifndef NODE_H
#define NODE_H
class Node{
public:
Node();
Node(int newData);
int getData();
void setData(int newData);
Node* getLink();
void setLink(Node* newLink);
void setNext(Node *n);
Node *getNext();
private:
int data;
Node* Link;
};
#endif