#include"Human.h"
#include<iostream>
using namespace std;
Human::Human(){
 
}
char Human::makeMove( ){
cout<<"Enter move:";
  cin>>moveH;
  return moveH;
};
string Human::getName( ){
  name='Human';

};