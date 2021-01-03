//
// Created by MainUser on 2021/1/1.
//

# include <iostream>

using namespace std;

class Time{
public:
    Time(int h=0,int m = 0,int s = 0):hh(h),mm(m),ss(s){}
    void operator()(int h,int m,int s){
        hh = h;
        mm = m;
        ss = s;
    }
    void showTime(){
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
private:
    int hh,mm,ss;
};

int main(){
    Time t1(12,10,11);
    t1.showTime();
    t1.operator()(23,20,24);
    t1.showTime();
    t1(10,10,10);
    t1.showTime();
    system("pause");
    return 0;
}

