<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
  

   
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template <typename T>
class Sorter {
private:
    std::vector<T> data;

public:
    Sorter(const std::vector<T>& items) : data(items) {}

    void Sort() {
        std::sort(data.begin(), data.end(), std::greater<T>());
    }

    void Display() {
        for (const T& item : data) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Sorter<int> intSorter({3, 1, 4, 1, 5, 9});
    intSorter.Sort();
    intSorter.Display();

    Sorter<std::string> stringSorter({"apple", "banana", "cherry"});
    stringSorter.Sort();
    stringSorter.Display();

    return 0;
}
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
