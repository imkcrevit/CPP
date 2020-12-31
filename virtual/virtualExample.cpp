//
// Created by xu.lanhui on 2020/12/31.
//

#include <iostream>

using namespace std;
/*
 * Figure为抽象类，抽象类具有下面的特征
 *  抽象类中含有纯虚函数，由于纯虚函数没有实现代码，所以不能建立抽象类的对象。
 *  抽象类只能作为其他类的基类，可以通过抽象类对象的指针或引用访问到它的派生类对象，实现运行时的多态性。
 *  如果派生类知识简单地继承了抽象类的纯虚函数，而没有重新定义基类的纯虚函数，则派生类也是一个抽象类。
 */
class Figure{
protected:
    double x,y;
public:
    void set(double i,double j){
        x=i;
        y=j;
    }
    virtual void area() = 0;
};

class Trianle: public Figure{
public:
    void area(){
        cout<<"trianle area is :"<<x*y*0.5<<endl;
    }
};

class Rectangle: public Figure{
public:
    void area(){
        cout<<"rectangle area is :"<<x*y<<endl;
    }
};

void main(){
    Figure *pF = NULL;

    Rectangle r;
    Trianle t;
    t.set(10,20);

    pF = &t;//此时指针pF指向t
    pF->area();
    r.set(10,20);
    pF = &r;//此时指针pF指向r
    pF->area();

    Figure &rF = t;//rF作为t的别名引用
    rF.set(20,20);
    rF.area();
    system("pause");
}