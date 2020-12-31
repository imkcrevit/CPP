#include <iostream>
#include "inline.h"

using namespace std;

class R{
public:
    R(int r1,int r2){R1 = r1,R2 = r2;}

    void print();
    void print() const ;
private:
    int R1,R2;
};

void R::print() {
    cout<<"普通调用."<<endl;
    cout<<R1<<":"<<R2<<endl;
}
void R::print() const {
    cout<<"常对象调用."<<endl;
    cout<<R1<<";"<<R2;
}

int main() {
    R a = R(5,6);
    a.print();
    const R b = R(7,8);
    b.print();
    system("pause");

    return 0;
}
