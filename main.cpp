#include <iostream>
#include "templates.h"

int main() {

    int a = 5, b = 7;
    my_swap(a, b);

    std::cout << a << ' ' << b << "\n";

    QQ<int> quuu(5);

    std::cout << quuu.pop() << " popped" << '\n';

    quuu.push(111);
    std::cout << "first" << "\n";

    quuu.push(222);
    std::cout << "second" << "\n";

    quuu.push(333);
    std::cout << "third" << "\n";

    quuu.push(444);
    std::cout << "fourth" << "\n";

    quuu.push(555);
    std::cout << "fifth" << "\n";

    std::cout << quuu.pop() << " popped" << '\n';

    quuu.push(666);
    std::cout << "sixth" << "\n";

    std::cout << quuu.pop() << " popped" << '\n';
}
