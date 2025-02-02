#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1; // 빈문자열 선언
    string str2 = "Hello, World!"; //문자열 직접 초기화
    string str3(str2); // 문자열 복사
    string str4(str2, 0, 5); // 문자열 부분복사 초기화
    string str5(10, '*'); // 반복된 문자로 문자열 초기화

    cout << str2 << " " << str3 << endl;
    cout << str4 << " " << str5 << endl;

    return 0;
}