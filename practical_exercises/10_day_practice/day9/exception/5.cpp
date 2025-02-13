// Eg10-5.cpp
#include <iostream>
using namespace std;

<<<<<<< HEAD
void handler(int n) throw(int, char, double) {
=======
void handler(int n) {
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  if (n == 1)
    throw n;
  if (n == 2)
    throw 'x';
  if (n == 3)
    throw 1.1;
}
int main() {
  cout << "Before handler..." << endl;
  try {
<<<<<<< HEAD
    handler(1);
=======
    handler(2);
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  } catch (int i) {
    cout << "catch an integer..." << endl;
  } catch (char c) {
    cout << "catch an char..." << endl;
  } catch (double d) {
    cout << "catch an double..." << endl;
  }
  
}
