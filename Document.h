#ifndef DOCUMENT_H
#define DOCUMENT_H
using namespace std;
#include<string>

class Document{
public:
Document();
Document(string doc_name,int doc_id,int license_limit);
int get_id();
void set_id(int newid);
bool borrow();
void return_back();
string get_name();
private:
string name;
int id;
int sum_copy;
int num_copy;
};
#endif