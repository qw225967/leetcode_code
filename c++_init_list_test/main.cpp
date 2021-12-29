#include<iostream>

using namespace std;
//定义一个时间类
class Time
{
  public:
    Time(int hour = 0,int minute = 0,int second = 0)
    {//定义一个全缺省构造函数
      _hour = hour;
      _minute = minute;
      _second = second;
      cout<<"Time();"<<endl;
    }
  protected:
    int _hour;
    int _minute;
    int _second;
};


class Date
{
  public:
    Date(int year,int month,int day,int hour,int minute,int second)
    {
      _year = year;
      _month = month;
      _day = day;
      _time = Time(hour,minute,second);
      //创建一个Time类匿名变量来对_t 进行初始化
      //这里的完成动作应该是调用一次构造函数
    }
  protected:
    int _year;
    int _month;
    int _day;
    Time _time;//时间类作为日期类的成员变量
};

int main() {
    Date d(2021,9,7,14,20,2);    


    return 0;
}
