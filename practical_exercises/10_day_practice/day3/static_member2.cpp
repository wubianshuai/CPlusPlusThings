/* 静态成员函数2.cpp */
#include <iostream>
using namespace std;
class A {
public:
  static void f(A a);
  void setx(int setx);
private:
  int x;
};
void A::setx(int setx){
  x=setx;
}
void A::f(A out) {

  //静态成员函数只能引用属于该类的静态数据成员或静态成员函数。
  // cout<<x; //对x的引用是错误的
  cout << out.x; //正确
}

int main(int argc, char const *argv[]) {
  A a;
  a.setx(5);
  A::f(a); // 输出5
  A::f(a); // 输出5
  A::f(a); // 输出5
  
  return 0;
}
