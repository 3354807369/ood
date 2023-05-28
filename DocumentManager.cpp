#include "DocumentManager.h"

void DocumentManager::addDocument(string name,int id,int license_limit){
    Document d=Document(name,id,license_limit);
    documents[id]=d;
    return;
}
void DocumentManager::addPatron(int patronID){
    Patrons p=Patrons(patronID);
    patrons[patronID]=p;
    return;
}
int DocumentManager::search(string name){
    for(auto i=documents.begin();i!=documents.end();i++){
        if(i->second.get_name()==name){
            return i->second.get_id();
        }
    }
    return 0;
}
bool DocumentManager::borrowDocument(int docid,int patronID){
    auto i_doc=documents.find(docid);
    auto i_pat=patrons.find(patronID);
    if(i_doc == documents.end()||i_pat==patrons.end()){
        return false;
    }
    if(documents[docid].borrow()){
        return false;
    }
    patrons[patronID].borrow_doc(docid);
    return true;
}
void DocumentManager::returnDocument(int docid,int patronID){
    auto i_pat=patrons.find(patronID);
    if(i_pat==patrons.end()){
        return;
    }
    for(vector<int>::size_type i=0;i< patrons[patronID].get_borr_docs().size();i++){
        if(patrons[patronID].get_borr_docs()[i]==docid){
            patrons[patronID].return_doc(docid);
            documents[docid].return_back();
            return;
        }
    }
    return;
}
map<int,Document>DocumentManager::get_doc(){
    return documents;
}
map<int,Patrons>DocumentManager::get_pat(){
    return patrons;
}