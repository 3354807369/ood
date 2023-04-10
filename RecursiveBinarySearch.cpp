#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::search(std::vector<int> list,int target){
return realsearch(list,target,0,list.size()-1);
}
bool RecursiveBinarySearch::realsearch(std::vector<int> list, int target, int begin, int end){
    if(end-begin < 2){
        if(target!=list[begin]||target!=list[end]){
        return false;
        }
    }
int middle = (begin+end)/2;
if(target==list[middle]){
    return true;
}else if(target>list[middle]){
    return realsearch(list,target,middle+1,end);
}else{
    return realsearch(list,target,begin,middle-1);
}
return false;
}