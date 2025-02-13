//
// Created by light on 19-11-5.
//
<<<<<<< HEAD

=======
>>>>>>> 190428d20286416d8ae3dad8e4a7f7d467e918d5
#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void hello() {
    cout << "hello world" << endl;
}

int main() {
    thread t(hello);
    t.join();       // must add this line otherwise will failed!
    // 需要注意的是线程对象执行了join后就不再joinable了，所以只能调用join一次。
    return 0;
}