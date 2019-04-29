#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(5, 10);
    for (auto& s : a) {
        std::cout << s << std::endl;
    }
    std::cout << "Hello world!" << std::endl;
    return 0;
}