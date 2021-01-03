//
// Created by MainUser on 2021/1/1.
//

#include <iostream>
#include <cstring>

using namespace std;

template<class T> T compareMax(T t1,T t2){
    return t1>t2?t1:t2;
}

template<> char* compareMax(char *s1,char *s2){
    return strcmp(s1,s2)==0?s1:s2;
}

int main(void){
    cout<<compareMax(1.2,2.3)<<endl;
    cout<<compareMax("abcd","desf")<<endl;
    system("pause");
    return 0;
}