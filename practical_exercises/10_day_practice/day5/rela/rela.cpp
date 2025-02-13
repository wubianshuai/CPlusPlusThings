/* 基类与派生类(重要).cpp */
#include <iostream>
using namespace std;
class A {
  int a;

public:
  void setA(int x) { a = x; }
  int getA() { return a; }
};
class B : public A {
  int b;

public:
  void setB(int x) { b = x; }
  int getB() { return b; }
};
void f1(A a, int x) { a.setA(x); }
void f2(A *pA, int x) { pA->setA(x); }
void f3(A &rA, int x) { rA.setA(x); }

int main() {
  A a1, *pA;
  B b1;
  a1.setA(1);
  b1.setA(2);
  //把派生类对象赋值给基类对象。
  a1 = b1;
  cout << a1.getA() << endl;
  cout << b1.getA() << endl;
<<<<<<< HEAD
  a1.setA(10);
  cout << a1.getA() << endl;
  cout << b1.getA() << endl;
=======
  cout << "分割1"<<endl;
  a1.setA(10);
  cout << a1.getA() << endl;
  cout << b1.getA() << endl;
   cout << "分割2"<<endl;
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  //把派生类对象的地址赋值给基类指针。
  pA = &b1;
  pA->setA(20);
  cout << pA->getA() << endl;
  cout << b1.getA() << endl;
<<<<<<< HEAD
=======
   cout << "分割3"<<endl;
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  //用派生类对象初始化基类对象的引用。
  A &ra = b1;
  ra.setA(30);
  cout << pA->getA() << endl;
  cout << b1.getA() << endl;
<<<<<<< HEAD
  b1.setA(7);
  cout << b1.getA() << endl;
  f1(b1, 100);
  cout << "1111111111" << endl;
  cout << b1.getA() << endl; // 7
  f2(&b1, 200);
  cout << b1.getA() << endl;
=======
  cout << "分割4"<<endl;
  b1.setA(7);
  cout << b1.getA() << endl;
  cout << "分割5"<<endl;

  f1(b1, 100);
  cout << b1.getA() << endl; 
  f2(&b1, 200);
  
  cout << b1.getA() << endl;
  cout << "分割6"<<endl;
  
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  f3(b1, 300);
  cout << b1.getA() << endl;
  
  return 0;
}