#include <fstream>
#include <iostream>
//向量是一个能够存放任意类型的动态数组
#include <cstring>
#include <vector>
using namespace std;
class Person {
private:
  char name[20];
  char id[18];
  int age;
  char addr[20];

public:
  Person() {}
  Person(char *n, char *pid, int Age, char *Addr) {
    strcpy(name, n);
    strcpy(id, pid);
    age = Age;
    strcpy(addr, Addr);
  }
  void display() {
    cout << name << "\t" << id << "\t" << age << "\t" << addr << endl;
  }
};
int main(int argc, char const *argv[]) {
  vector<Person> v;
  vector<Person>::iterator
      pos; //声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素
  char ch;
<<<<<<< HEAD
  ofstream out("d:/person.dat", ios::out | ios::app | ios::binary);
=======
  ofstream out("./person.dat", ios::out | ios::app | ios::binary);
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  char Name[20], ID[18], Addr[20];
  int Age;
  cout << "------输入个人档案------" << endl << endl;
  do {
    cout << "姓名： ";
    cin >> Name;
    cout << "身份证号： ";
    cin >> ID;
    cout << "年龄： ";
    cin >> Age;
    cout << "地址： ";
    cin >> Addr;
    Person per(Name, ID, Age, Addr);
    out.write((char *)&per, sizeof(per));
    cout << "Enter another Person(y/n)?";
    cin >> ch;
  } while (ch == 'y');
  out.close();
<<<<<<< HEAD
  ifstream in("d:/person.dat", ios::in | ios::binary); // L9
=======
  ifstream in("./person.dat", ios::in | ios::binary); // L9
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
  Person s;
  in.read((char *)&s, sizeof(s));
  while (!in.eof()) {
    v.push_back(s);
    in.read((char *)&s, sizeof(s));
  }
  cout << "\n---------从文件中读出的数据--------" << endl << endl; // L15
  pos = v.begin();
  for (pos = v.begin(); pos != v.end(); pos++)
    (*pos).display();

  
  return 0;
}
