#include <iostream>

using namespace std;

int main() {
    int i = 65;
    float f = 5.2f;

    // 암시적 형 변환 : 타입이 서로 다른 변수간 연산을 하여 발생
    double d = i + f; // 메모리가 큰 float으로 변환
    cout << d << endl;
    
    // 명시적 형 변환 : 사용자가 임의로 변경
    cout << static_cast<int>(d) << endl; // double -> int
    cout << static_cast<char>(i) << endl; // int -> char : 'A'

    return 0;
}