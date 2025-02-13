// Eg10-12.cpp
#include <iostream>
using namespace std;
class BasicException {
public:
  char *Where() { return "BasicException..."; }
};
class FileSysException : public BasicException {
public:
  char *Where() { return "FileSysException..."; }
};
class FileNotFound : public FileSysException {
public:
  char *Where() { return "FileNotFound..."; }
};
class DiskNotFound : public FileSysException {
public:
  char *Where() { return "DiskNotFound..."; }
};
int main() {
  try {
    //         .....  //程序代码
    throw FileSysException();
  } catch (DiskNotFound p) {
    cout << p.Where() << endl;
  } catch (FileNotFound p) {
    cout << p.Where() << endl;
<<<<<<< HEAD
  } catch (FileSysException p) {
    cout << p.Where() << endl;
  } catch (BasicException p) {
    cout << p.Where() << endl;
=======
  } catch (BasicException p) {
    cout << p.Where() << endl;
  } catch (FileSysException p ) {
    cout << p.Where() << endl;
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  }
  try {
    //        .....  //程序代码
    throw DiskNotFound();
  } catch (BasicException p) {
    cout << p.Where() << endl;
  } catch (FileSysException p) {
    cout << p.Where() << endl;
  } catch (DiskNotFound p) {
    cout << p.Where() << endl;
  } catch (FileNotFound p) {
    cout << p.Where() << endl;
  }
}
