# include <iostream>
#include <cmath>

using namespace std;

class Point{
public:
    Point(int x =0,int y=0):X(x),Y(y){}
    int GetX(){
        return X;
    }
    int GetY(){
        return Y;
    }

    friend float Distance(Point &a,Point &b);

private:
    int X,Y;
};



float Distance(Point &a,Point &b){
    double dx = a.X - b.X;
    double dy = a.Y - b.Y;
    return sqrt(dx*dx + dy*dy);
}


int main(){
    Point p1(3,5),p2(4,6);
    cout<<"Two Points Distance is: "<<Distance(p1,p2)<<endl;
    cout<<"&p1: "<<&p1<<endl;
    system("pause");
    return 0;
}
