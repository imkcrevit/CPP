#include <iostream>

using namespace std;

class Time{
public:
    Time(int h=0,int m=0,int s=0){
        hour = h;
        minute = m;
        second = s;
    }

    void operator++();
    void showTime(){
        cout<<"Now Time is: "<<hour<<":"<<minute<<":"<<second<<endl;
    }

private:
    int hour,minute,second;

};

void Time::operator++() {
    ++second;
    if(second==60){
        second=0;
        ++minute;
        if(minute==60){
            minute=0;
            hour++;
            if(hour==24){
                hour=0;
            }
        }
    }
}

int main(){
    Time t(23,59,59);
    ++t;
    t.showTime();
    system("pause");
    return 0;
}
