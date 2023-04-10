#include "BubbleSort.h"
#include <algorithm>
std::vector<int> BubbleSort::sort(std::vector<int> list){
    for(size_t i=0;i<list.size()-1;i++){
        bool sort = true;
        for(size_t j=0;j<list.size()-1;j++){
            if(list[j]>list[j+1]){
                std::swap(list[j],list[j+1]);
                sort=false;
            }
        }
        if(sort==true){return list;}
            
}
 return list;
}