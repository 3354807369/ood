#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include<vector>

class RecursiveBinarySearch
{
private:
   bool realsearch(std::vector<int> list,int target,int begin,int end);
public:
 bool search(std::vector<int> list,int target);
};
#endif