#include <iostream>

void crash() {
    int* p = nullptr;
    *p = 42; // segmentation fault
}

int main() {
    std::cout << "Starting program..." << std::endl;
    crash();
    return 0;
}
