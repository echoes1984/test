#include <iostream>
#include <tbb/task_group.h>
void hello() {
    std::cout << "hello, world." << std::endl;
}
void byebye() {
    std::cout << "byebye, world." << std::endl;
}
int main() {
    tbb::task_group tg;
    tg.run([&] {
        hello();
    });
    tg.run([&] {
        byebye();
    });
    tg.wait();
    return 0;
}
