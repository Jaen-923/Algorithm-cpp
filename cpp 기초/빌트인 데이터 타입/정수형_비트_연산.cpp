#include <iostream>

int main() {
    int a = 13;
    int b = 4;
    std::cout << (a & b) << std::endl; // AND 연산
    std::cout << (a | b) << std::endl; // OR 연산
    std::cout << (a ^ b) << std::endl;  // XOR 연산 : 같으면 0, 다르면 1
    std::cout << (~a) << std::endl;        // NOT 연산
    std::cout << (a << 1) << std::endl; // 왼쪽 쉬프트
    std::cout << (a >> 1) << std::endl; // 오른쪽 쉬프트

    return 0;

}