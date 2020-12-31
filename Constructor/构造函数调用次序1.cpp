#include <iostream>

using namespace std;

class A{
public:
    A(int i =0){
        a = i;
        cout<<"A---------"<<a<<endl;
    }
private:
    int a;
};

class B{
public:
    B(int i =0 ){
        b=i;
        cout<<"B---------"<<b<<endl;
    }
private:
    int b;
};

class C{
public:
    C(int i=0){
        c = i;
        cout<<"c------------"<<c<<endl;
    }

private:
    int c;
};
/*
 * 构造顺序为1-B，之后按照初始化顺序进行排列
 * 例中是B->A->C->A->D
 * 如果改变初始化顺序中间位置会随之更改
 */
class D: public B{
public:
    A a0,a4;
    C c1,c2;
    A *a1 = new A(10);
    D():a4(4),c2(2),c1(1)//派生类只能采用这种方式向基类或成员对象构造函数传递参数
    {
        cout<<"D--------5"<<endl;
    }
};

int main(){
    D d;
    system("pause");
}
