#include<iostream>

using namespace std;

class Circle {
    public:
        Circle(double r):R(r) {}
        Circle(int x,int y=0):X(x),Y(y) {}
        Circle(const Circle& c):R(c.R),X(c.X),Y(c.Y) {}

    private:
        double R;
        int X;
        int Y;
};
class Circle1 {
    public:
        explicit Circle1(double r):R(r) {}
        explicit Circle1(int x,int y=0):X(x),Y(y) {}
        explicit Circle1(const Circle1& c):R(c.R),X(c.X),Y(c.Y) {}

    private:
        double R;
        int X;
        int Y;
};

int main() {
    //发生隐式类型转换 
    //编译器会将它变成如下代码 
    //tmp = Circle(1.23) 
    //Circle A(tmp); 
    //tmp.~Circle(); 
    //  Circle A = 1.23;  
    //注意是int型的，调用的是Circle(int x, int y = 0) 
    //它虽然有2个参数，但后一个有默认值，任然能发生隐式转换 
    // Circle B = 123; 
    //这个算隐式调用了拷贝构造函数 
    //Circle C = A; 



    //一下3句，都会报错 
    //Circle A = 1.23;  
    //Circle B = 123; 
    //Circle C = A; 

    //只能用显示的方式调用了 
    //未给拷贝构造函数加explicit之前可以这样 
   // Circle1 A = Circle1(1.23); 
   // Circle1 B = Circle1(123); 
   // Circle1 C = A; 

    //给拷贝构造函数加了explicit后只能这样了 
    Circle1 A1(1.23); 
    Circle1 B1(123); 
    Circle1 C1(A1); 

    return 0;
}
