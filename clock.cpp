//
// Created by xu.lanhui on 2020/12/30.
//

#include "clock.h"
#include <iostream>

using namespace std;

clock::clock(int NewH, int NewM, int NewS) {
    this->Hour =  NewH;
    this->Minute = NewM;
    this->Second = NewS;
}

clock::clock(clock &c) {
    this->Hour = c.Hour;
    this->Minute = c.Minute;
    this->Second = c.Second;
}

void clock::SetTime(int NewH, int NewM, int NewS) {

    Hour = NewH;
    Minute = NewM;
    Second = NewS;
}

void clock::ShowTime() {
    cout<<this->Hour<<":"<<this->Minute<<":"<<this->Second<<endl;
}

clock::~clock() {}

int main(){
    clock c(0,0,0);
    c.SetTime(10,20,50);
    clock c1(c);
    c1.ShowTime();
    c1.SetTime(18,50,40);
    c1.ShowTime();
    c.ShowTime();
    system("pause");
}