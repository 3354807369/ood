#include "Document.h"
#include "Patrons.h"
#include "DocumentManager.h"
#include <iostream>
int main(){
    DocumentManager m;
    m.addDocument("ADDS",1,5);
    m.addDocument("OOP",2,2);
    m.addDocument("MATLAB",3,1);
    m.addPatron(1);
    m.addPatron(2);
    m.addPatron(3);
    m.addPatron(4);
    m.addPatron(5);
    cout << "the id of doc ADDS is" << m.search("ADDS") <<endl;
    m.borrowDocument(1,1);
    m.borrowDocument(1,2);
    m.borrowDocument(1,3);
    m.returnDocument(1,2);
    m.returnDocument(2,2);
    return 0;
}