//
// Created by xu.lanhui on 2020/12/30.
//

#ifndef APPLICATION1_CLOCK_H
#define APPLICATION1_CLOCK_H


class clock {
public:
    clock(int NewH,int NewM,int NewS);
    clock(clock &c);
    void SetTime(int NewH,int NewM,int NewS);
    void ShowTime();
    ~clock();

private:
    int Hour,Minute,Second;

};


#endif //APPLICATION1_CLOCK_H
