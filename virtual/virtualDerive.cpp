//
// Created by xu.lanhui on 2020/12/31.
//

#include <iostream>

using namespace std;

class B{
public:
    virtual void g(){cout<<"B::g()"<<endl;}
    void f(){g();}
};

class D: public B{
public:
    virtual void g(){cout<<"D::g()"<<endl;}
};

void main(){
    D d;
    d.f();
    system("pause");
}