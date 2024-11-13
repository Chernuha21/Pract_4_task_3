#include <iostream>
#include <list>
#include <string>

int main() {
    // 1. Створіть список з рядками
    std::list<std::string> fruits = { "apple", "banana", "cherry" };

    // 2. Використовуйте зворотні ітератори для перебору елементів списку
    std::cout << "List in reverse:" << std::endl;
    for (auto it = fruits.rbegin(); it != fruits.rend(); ++it) {
        // 3. Виведіть рядки у зворотному порядку
        std::cout << *it << std::endl;
    }

    return 0;
}
