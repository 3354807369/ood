#include "Document.h"

Document::Document(){
    name="NULL";
    sum_copy=0;
     num_copy=0;
     return;
}
Document::Document(string doc_name,int doc_id,int license_limit){
name=doc_name;
id=doc_id;
sum_copy=license_limit;
num_copy=sum_copy;
return;
}
bool Document::borrow(){
if(num_copy>0){
    num_copy--;
    return true;
}
return false;
}
void Document::return_back(){
    num_copy++;
    return;

}
int Document::get_id(){
    return id;
}
string Document::get_name(){
    return name;
}