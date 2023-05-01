#include "bigNumCalc.h"
bigNumCalc::bigNumCalc(){
    return;
}
bigNumCalc::~bigNumCalc(){
    return;
}
std::list<int> bigNumCalc::buildBigNum(std::string numString){
    std::list<int> list;
    for(int i=0;i < numString.size();i++){
        list.push_back(std::stoi(std::string(1,numString[i])));
}
return list;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2){
    std::list<int> list;
    int num=0,advancement = 0;
    while(num1.size()>0&&num2.size()>0){
        num=num1.back()+num2.back()+advancement;
        if(num>=10){
            num -= 10;
            advancement=1;
        }else{
            advancement=0;
        }
        list.push_front(num);
        num2.pop_back();
    }
    if(advancement>0){list.push_front(advancement);}
    return list;
}

std::list<int> bigNumCalc::sub(std::list<int> num1,std::list<int>num2){
    std::list<int> list;
    int num=0,advancement = 0;
    while(num1.size()>0 && num2.size()>0){
        num = num1.back()-num2.back()-advancement;
        if(num < 0){
            num+=10;
            advancement = 1;

        }else{
            advancement = 0;
        }
        list.push_front(num);
        num1.pop_back();
        num2.pop_back();
    }
    if(num1.size()>0){
        num = num1.back() - advancement;
        if(num<0){
            num+=10;
            advancement=1;
        }else{
            advancement=0;
        }
        list.push_front(num);
        num1.pop_back();

    }else if(num2.size()>0){
        num = num2.back()-advancement;
        if(num<0){
            num+=10;
            advancement=1;
        }else{
            advancement=0;
        }
        list.push_front(num);
        num2.pop_back();
    }
    while(list.front() == 0){
        list.pop_front();
    }
    return list;
}


std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2){
     std::list<int> list;
    int num=0,advancement = 0;
    while(num1.size()>0 && num2.size()>0){
        num = num1.back()-num2.back()+advancement;
        if(num>=10){
            advancement = num/10;
            num%=10;
        }else{
            advancement = 0;
        }
        list.push_front(num);
        num1.pop_back();
        num2.pop_back();
}
    if(num1.size()>0){
        num = num1.back()+advancement;
        if(num>=10){
            num -= 10;
            advancement = 1;
        }else{
            advancement=0;
        }
        list.push_front(num);
        num1.pop_back();
    }else if(num2.size()>0){
        num = num2.back()+advancement;
        if(num>=10){
            num -=10;
            advancement=1;
        }else{
            advancement=0;
        }
        list.push_front(num);
        num2.pop_back();
    }
    if(advancement>0){list.push_front(advancement);}
    return list;
}