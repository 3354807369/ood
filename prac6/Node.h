#ifndef NODE_H
#define NODE_H
class Node{
public:
Node();

int getData();
void setData(int newData);
void setNext(Node *n);
Node *getNext();
private:
int data;
Node* Link;
};
#endif