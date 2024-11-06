/* 重载++的时钟.cpp */
/*
设计一个时钟类，能够记录时、分、秒，重载它的++运算符，每执行一次++运算，加时1秒，但要使计时过程能够自动进位。
*/
#include <iostream>
using namespace std;
class Time {
public:
  Time(int h = 0, int m = 0, int s = 0) {
    hour = h;
    minute = m;
    second = s;
  }
  Time operator++();
  Time operator++(int);
  void showTime() {
    cout << "当前时间为：" << hour << ":" << minute << ":" << second << endl;
  }

private:
  int hour, minute, second;
};
//函数返回值是TIME类 有int参数 后置重置
Time Time::operator++(int n) {
  Time tmp = *this;
  ++(*this);
  return tmp;
}
//函数返回值是TIME类 无参数 前置重置
Time Time::operator++() {
  ++second;
  if (second == 60) {
    second = 0;
    ++minute;
    if (minute == 60) {
      minute = 0;
      hour++;
      if (hour == 24) {
        hour = 0;
      }
    }
  }
  return *this;
}

int main(int argc, char const *argv[]) {
  Time t(23, 59, 59);
  t.showTime();
  ++t;
  t.showTime();
  t++;
  t.showTime();
  
  return 0;
}
