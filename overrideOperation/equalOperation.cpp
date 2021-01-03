//
// Created by MainUser on 2021/1/1.
//

# include <iostream>

using namespace std;

class X{
public:
    X &operator =(const X & x){
        cout<<"a: "<<endl;
        return *this;
    }
};

int main(){
    X obj1,obj2,obj3;
    obj1 = obj2;
    obj1.operator=(obj2);
    obj1=obj3=obj2;
    system("pause");
    return 0;
}