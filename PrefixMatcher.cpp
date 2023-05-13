#include "PrefixMatcher.h"
int PrefixMatcher::selectRouter(string networkAddress){
    int longest=0;
    int router=0;
    for(int i=0;i<addre.size();i++){
        int minim = min(networkAddress.length(),addre[i].length());
        int match_len=0;
        for(int j=0;j<minim;j++){
            if(addre[i][j]==networkAddress[j]){
                match_len++;
            }else{
                j=minim;
            }
        }
        if(match_len>longest){
            longest=match_len;
            router=i;
        }

    }
    return router;
}
void PrefixMatcher::insert(string address,int routerNumber){
addre.push_back(address);
numbers.push_back(routerNumber);
}