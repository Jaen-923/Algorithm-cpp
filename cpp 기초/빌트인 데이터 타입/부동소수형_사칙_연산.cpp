#include <iostream>

using namespace std;

int main() {
    double d = 2.5;
    float f = 1.5f; // 자동 형변환 방지하기 위해 f 붙여줌

    cout << sizeof(d) << endl; // 8 바이트
    cout << sizeof(f) << endl; // 4 바이트
    cout << d << " " << f << endl;
    cout << d+f << endl;
    cout << d-f << endl;
    cout << d*f << endl;
    cout << d/f << endl;

    return 0;

}