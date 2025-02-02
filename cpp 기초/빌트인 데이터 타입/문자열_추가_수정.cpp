#include <iostream>
#include <string>

using namespace std;

int main() {

    // 문자열 추가는 '+' 연산자 사용
    string str = "APPLE";
    str += ", World!";
    cout << str << endl;

    str[7] = 'P'; // W -> P로 수정
    cout << str << endl;

    // replace(시작 위치, 시작 위치부터 대체할 문자열 개수, 대체할 문자열)
    str.replace(7, 4, "Col");
    cout << str << endl;

    return 0;
}