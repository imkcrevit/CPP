//
// Created by xu.lanhui on 2020/12/31.
//
/*
 * 虚继承
 * 概念：解决从不同途径继承来的同名数据成员在内存中有不同拷贝造成的数据不一致问题，将共同的基类设置为虚基类。
 * 这时从不同的路径继承过来的同名数据成员在内存中就只有一个拷贝，同一个函数名也只有一个映射
 * 解决问题：
 * 解决了二义性问题，也节省了内存，避免数据不一致问题
 *
 * 分析：
 * 从程序中可以看到，C,D,E不同的继承类型为三种 public A,virtual A与virtual B，其中两次使用了virtual B
 * 第二次的继承将会直接引用第一次的拷贝，所以我们会看到控制台对于C,D部分的输出为B-A-A其中第二次B被省略
 * 按照继承的原则首先基类，生成C-D，然后成员为A，最后为E，所以顺序为：B-A-A-C-D-A-E
 *
 */
# include <iostream>

using namespace std;

class A{
    int a;
public:
    A(){cout<<"Constructing A"<<endl;}
};
class B{
public:
    B(){cout<<"Constructing B"<<endl;}
};
class C: public A,virtual public B{
public:
    C(int j){cout<<"Constructing C"<<endl;}
};

class D:virtual public A,virtual public B{
public:
    D(int j){cout<<"Constructing D"<<endl;}
};

class E: public C, public D{
public:
    E(int m,int n):C(m),D(n){cout<<"Constructing E"<<endl;}
    A a;
};

void main(){
    E d(1,2);
    system("pause");
}