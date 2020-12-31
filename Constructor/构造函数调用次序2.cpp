# include <iostream>

using namespace std;

class A{
    int a;
public:
    void setA(int x){a=x;}
    int getA(){return a;};
};

class B: public A{
    int b;
public:
    void setB(int x){b=x;}
    int getB(){return b;}
};

void f1(A a,int x){
    a.setA(x);
}

void f2(A *pA,int x){
    pA->setA(x);
}

void f3(A &rA,int x){
    rA.setA(x);
}

int main(){
    A a1,*pA;
    B b1,*pB;
    a1.setA(1);
    b1.setA(2);

    a1 = b1;

    cout<<a1.getA()<<endl;//2
    cout<<b1.getA()<<endl;//2
    a1.setA(10);
    cout<<a1.getA()<<endl;//10
    cout<<b1.getA()<<endl;//2

    pA = &b1;
    pA->setA(20);
    cout<<pA->getA()<<endl;//20
    cout<<b1.getA()<<endl;//20

    A &ra = b1;//ra是b1的引用，对ra的更改就是对b1的更改
    ra.setA(30);//ra被赋值30所以此时b1的值也为30
    cout<<pA->getA()<<endl;//30 pA指向b1的地址，b1发生变化所以pA也发生变化
    cout<<b1.getA()<<endl;//30

    b1.setA(7);
    cout<<b1.getA()<<endl;//7
    f1(b1,100);
    cout<<"111111"<<endl;
    f2(&b1,200);
    cout<<b1.getA()<<endl;
    f3(b1,300);
    cout<<b1.getA()<<endl;
    system("pause");
    return 0;
}
