#ifndef PATRONS_H
#define PATRONS_H
using namespace std;
#include <vector>
class Patrons{
public:
Patrons();
Patrons(int parton);
void borrow_doc(int doc_id);
bool return_doc(int doc_id);
vector<int>get_borr_docs();
private:
vector<int>borr_docs;
int id;

};
#endif