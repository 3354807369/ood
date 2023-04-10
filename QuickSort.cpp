#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
  return realsort(list,0,list.size()-1);
}
std::vector<int> QuickSort::realsort(std::vector<int> list,int begin,int end){
    if(end-begin<2){
        if(list[end]<list[begin]){
            std::swap(list[end],list[begin]);
        }
        return list;
    }
if(begin>=end){return list;}
int pivot = list[begin + 2];
int left = begin+1, right = end;
while(left <= right){
    while(left<=right&&list[left] < pivot){
        left++;
    }
    while(left<=right&&list[right] > pivot){
        right--;
    }
    if(left <= right){
        std::swap(list[left], list[right]);
        left++;
        right--;
    }
}
list = realsort(list, begin, right-1);
list = realsort(list, right+1, end);
return list;
}