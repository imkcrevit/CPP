#include <iostream>

using namespace std;

class A{
public:
    A(){cout<<"Constructing A"<<endl;}
    ~A(){cout<<"Destructing A"<<endl;}
};
class B{
public:
    B(){cout<<"Constructing B"<<endl;}
    ~B(){cout<<"Destructing B"<<endl;}
};
/*
 * 首先构造成员后构造自身
 * 析构函数首先解析自身之后解析成员
 */
class C{
public:
    C(){cout<<"Constructing C"<<endl;}
    ~C(){cout<<"Destructing C"<<endl;}
    A a;
    B b;
};

/*
 * 没有构造函数只有析构函数
 * 首先构造基类然后构造成员之后构造自身
 * 析构反向
 */
class D: public A{
public:
    ~D(){cout<<"Destructing D"<<endl;}
    B b;
};

class Base{
    int x;
public:
    Base(int a){
        x=a;
        cout<<"Base constructor x = "<<x<<endl;
    }
    ~Base(){cout<<"Base destructor ... "<<endl;}
};

class Derived: public Base{
    int y;
public:
    Derived(int a,int b):Base(a){
        y =b;
        cout<<"Derived constructor y= "<<y<<endl;
    }
    ~Derived(){cout<<"Derived destructor ... "<<endl;}
};
////////////////////////////////////////////////////////////
/*
 * 构造函数给基类传递数据
 * 通过派生类构造函数派生基类类型
 */
class Point{
protected:
    int x,y;
public:
    Point(int a,int b=0){
        x=a;
        y=b;
        cout<<"constructing point("<<x<<","<<y<<") "<<endl;
    }
};
class Line: public Point{
protected:
    int len;
public:
    Line(int a,int b,int l):Point(a,b){
        len = l;
        cout<<"Constructing Line , len = "<<len<<endl;
    }
};


int main(){
    Line(1,2,3);
    system("pause");
    return 0;
}
