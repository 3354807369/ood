#include "Patrons.h"
Patrons::Patrons(){
    return;
}
Patrons::Patrons(int patron){
    id = patron;
    return;
}
void Patrons::borrow_doc(int doc_id){
    borr_docs.push_back(doc_id);
    return;
}
bool Patrons::return_doc(int doc_id){
for(int i=0;i < borr_docs.size();i++){
if(borr_docs[i] == doc_id){
    borr_docs.erase(borr_docs.begin()+i);
    return true;
}
}
return false;
}
vector<int>Patrons::get_borr_docs(){
    return borr_docs;
}
