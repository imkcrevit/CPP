//
// Created by xu.lanhui on 2020/12/31.
//

# include <iostream>

using namespace std;

class A{
    int x;
public:
    A(int a){
        x=a;
        cout<<"Constructing A"<<endl;
    }
    ~A(){cout<<"Destructing A"<<endl;}
};

class B: public A{
public:
    B(int x):A(x){cout<<"Constructing B"<<endl;}
};

class C: public B{
public:
    C(int y):B(y){cout<<"Constructing C"<<endl;}
};
/*
 * 派生顺序：
 * C->B->A
 */
void main(){
    C c(1);
    system("pause");
}

