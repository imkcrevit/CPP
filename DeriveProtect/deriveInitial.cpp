//
// Created by xu.lanhui on 2020/12/31.
//
#include <iostream>
using namespace std;

class A{
    int a;
public:
    A(){}
    A(int x){
        a =x;
        cout<<"virtual Base A .. "<<a<<endl;
    }
};
class B:virtual public A{
public:
    B(int x):A(x){
        cout<<"virtual Base B .. "<<x<<endl;
    }
};

class C:virtual public A{
    int x;
public:
    C(int x){
        cout<<"Constructing C .. "<<x<<endl;
    }
};

class ABC: public B, public C{
public:
    ABC(int i,int j,int k):C(i),B(j),A(k){
        /*
         * 此处必须对A进行初始化，因为虚继承的初始化由最终派生类进行初始化
         * 由于ABC是对A虚继承的最终派生类，所以需要在初始化时对A进行初始化
         */
        cout<<"Constructing ABC .. "<<endl;
    }
};
/*
 * 下面的例子中展示了如果继承中存在同名继承或者是存在相同的基类继承
 * 将会出现二义性问题，此时我们可以对dex，dex2使用虚继承，将会只生成一个继承ex
 *
 */
class ex{
public:
    void vf(){
        cout<<"this is a example!!!"<<endl;
    }
};

class  dex: virtual public ex{};
class dex2: virtual public ex{};

class dex3: public dex, public dex2{};;

void main(){
    dex3 dx;
    dx.vf();
    system("pause");
}


