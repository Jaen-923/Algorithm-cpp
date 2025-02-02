#include <iostream>
#include <string>

using namespace std;

int main() {

    // 문자열 초기화
    string str = "Hello, C++ World!";

    // find(찾으려는 문자열) : 해당 문자열이 시작하는 인덱스 반환
    // find(찾으려는 문자열, 탐색 시작 위치) : 특정 위치부터 문자열 찾을 때 사용 

    size_t pos1 = str.find("Hello"); // size_t : 메모리 크기나 객체의 크기, 배열의 인덱스, 문자열의 위치 등을 표현할 때 사용하는 부호 없는 정수형 타입
    cout << pos1 << endl;

    size_t pos2 = str.find("C");
    cout << pos2 << endl;

    size_t start_index = 2;
    size_t pos3 = str.find("Hello", start_index);
    cout << pos3 << endl;

    size_t pos4 = str.find("Python");
    cout << pos4 << endl;

    return 0;

}