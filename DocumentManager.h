#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <map>
#include "Document.h"
#include "Patrons.h"

class DocumentManager{
    public:
    void addDocument(string name,int id,int license_limit);
    void addPatron(int patron);
    int search(string name);
    bool borrowDocument(int docid,int partonID);
    void returnDocument(int docid,int patronID);
    map<int, Document>get_doc();
    map<int,Patrons>get_pat();
    private:
    map<int,Document> documents;
    map<int,Patrons> patrons;

};
#endif