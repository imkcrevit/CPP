#include <iostream>

class B{
private:
    int i;
protected:
    int j;
public:
    int k;
};

class D: public B{
public:
    void f(){
        //i=1; 派生类不能访问私有成员
        j=2;//派生类可以访问基类保护成员
        k=3;//public
    }
};

int main(){
    B b;
    /*
     * b.i  不可访问
     * b.j  不可访问
     */
    b.k = 3;
    return 0;
}
