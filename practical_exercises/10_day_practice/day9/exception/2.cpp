// Eg10-2.cpp
#include <iostream>
using namespace std;
int main() {
  cout << "1--befroe try block..." << endl;
  try {
    cout << "2--Inside try block..." << endl;
    throw 10;
    cout << "3--After throw ...." << endl;
  } catch (double i) { //仅此与例10.1不同
    cout << "4--In catch block1 .. an int type is.." << i << endl;
  }
<<<<<<< HEAD
=======
  catch (int i) { //仅此与例10.1不同
    cout << "int--In catch block1 .. an int type is.." << i << endl;
  }
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  cout << "5--After Catch...";
  
  return 0;
}
