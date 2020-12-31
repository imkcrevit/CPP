//
// Created by xu.lanhui on 2020/12/31.
//

/*
 * protect关键词如果用在继承中
 * 将会把所有public类变为protect成员
 * 其他类别不变
 * 如果使用public继承，则可以访问基类的public类
 * ----------------------------------------
 * 公有继承将会保持原有关系进行继承，私有继承使用
 * 关键词private，将会把所有public成员修改为私有成员
 * 这一部分与C#一致
 */
# include <iostream>

using namespace std;

class Base{
    int x;
protected:
    int getx(){return x;}

public:
    Base(int a){x=a;}
    void setx(int n=0){x=n;}
    void showx(){cout<<x<<endl;}
};
class Derived: protected Base{
    int y;
public:
    Derived(int a):Base(a) {}
    void sety(int n){y=n;}
    void sety(){y=getx();}
    void showy(){cout<<y<<endl;}
};

void main(){
    Derived obj(3);
    obj.sety(20);
    obj.showy();
    obj.sety();
    obj.showy();

}