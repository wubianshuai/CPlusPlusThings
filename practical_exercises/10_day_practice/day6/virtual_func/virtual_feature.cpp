/* 虚函数特性.cpp */
#include <iostream>
#include <string>
using namespace std;
class A {
public:
  void f(int i) { cout << "A::f()" << endl; };
};
class B : public A {
public:
  virtual void f(int i) { cout << "B::f()" << endl; }
};
class C : public B {
public:
<<<<<<< HEAD
  void f(int i) { cout << "C::f()" << endl; }
=======
  // void f(int i) { cout << "C::f()" << endl; }
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
};
//一旦将某个成员函数声明为虚函数后，它在继承体系中就永远为虚函数了
class D : public C {
public:
<<<<<<< HEAD
  void f(int) { cout << "D::f()" << endl; }
=======
  // void f(int) { cout << "D::f()" << endl; }
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
};
int main() {
  A *pA, a;
  B *pB, b;
  C c;
  D d;
  pA = &a;
  pA->f(1); //调用A::f
  pB = &b;
  pB->f(1); //调用B::f
  pB = &c;
  pB->f(1); //调用C::f
  pB = &d;
  pB->f(1); //调用D::f
  
  return 0;
}
