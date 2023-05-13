#include "Autocompletion.h"
using namespace std;
vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> res;
    for(int i=0;i<words.size();i++){
    int j=0;
    if(partialWord.length()<=words[i].length()){
       while(j<=partialWord.length()-1 && words[i][j]==partialWord[j]){
        if(j>=partialWord.length()-1){
            res.push_back(words[i]);
        }
        j++;
       }
    }
    }
    return res;
}
void Autocomplete::insert(string word){
 words.push_back(word);
 return;
}