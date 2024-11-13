#include <iostream>
#include <list>
#include <string>

int main() {
    // 1. ������� ������ � �������
    std::list<std::string> fruits = { "apple", "banana", "cherry" };

    // 2. �������������� ������� ��������� ��� �������� �������� ������
    std::cout << "List in reverse:" << std::endl;
    for (auto it = fruits.rbegin(); it != fruits.rend(); ++it) {
        // 3. ������� ����� � ���������� �������
        std::cout << *it << std::endl;
    }

    return 0;
}
