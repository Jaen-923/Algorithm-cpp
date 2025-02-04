#include <iostream>

using namespace std;

int add(int num1, int num2) { // 반환값이 없다면 반환 타입 void
    return num1 + num2;
}

int main() {

    int a = 15;
    int b = 9;

    cout << add(a, b) << endl;

    return 0;
}