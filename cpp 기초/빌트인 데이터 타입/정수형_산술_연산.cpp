#include <iostream> //입출력 기능을 제공하는 표준 라이브러리

using namespace std; // std를 생략 가능하게 만들어줌. 원래는 std::cout

int main() {
    int a = 13;
    int b = 4;
    // cout : 콘솔에 글자를 출력
    // endl : 줄바꿈
    // << : 출력할 내용을 전달
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl; // 모듈러 연산(나머지)
    cout << -a << endl;
    
    cout << "++a: " << (++a) << endl;  // 전위 증가
    cout << "a++: " << (a++) << endl;  // 후위 증가
    cout << "--b: " << (--b) << endl;  // 전위 감소
    cout << "b--: " << (b--) << endl;  // 후위 감소

    return 0;

}