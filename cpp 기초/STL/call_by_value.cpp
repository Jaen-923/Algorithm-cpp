#include <iostream>

using namespace std;

void modify(int value) {

    value = 10;
    cout << "주소 " << &value << endl; // 주소값
    cout << "값 " << value << endl; // 값

    // 함수 종료 후 modify() 함수의 value는 메모리에서 사라짐

}

int main() {

    int value = 5;
    cout << "주소 : " << &value << endl;
    cout << "값 : " << value << endl;
    modify(value);
    cout << "값 : " << value << endl;

    return 0;
}