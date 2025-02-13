// Eg10-9.cpp
#include <iostream>
using namespace std;
class A {
  int a;

public:
  A(int i = 0) : a(i) {}
  ~A() { cout << "in A destructor..." << endl; }
};
class B {
  A obj[3];
  double *pb[10];

public:
  B(int k) {
    cout << "int B constructor..." << endl;
    for (int i = 0; i < 10; i++) {
<<<<<<< HEAD
      pb[i] = new double[20000000];
=======
      if(i==3)
        pb[i] = new double[0];
      else{
        pb[i] = new double[20000000];
      }
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
      if (pb[i] == 0)
        throw i;
      else
        cout << "Allocated 20000000 doubles in pb[" << i << "]" << endl;
    }
  }
};
int main() {
  try {
    B b(2);
  } catch (int e) {
    cout << "catch an exception when allocated pb[" << e << "]" << endl;
  }
  
}
