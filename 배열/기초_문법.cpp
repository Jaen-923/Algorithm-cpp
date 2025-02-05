#include <iostream>

using namespace std;

int main() {

    // 배열 선언
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2}; // -> {1, 2, 0, 0, 0};
    int arr3[5] = {}; // -> {0, 0, 0, 0, 0};
    int arr4[5]; // 초기화 없이 배열 선언 -> 쓰레기값들로 채워짐
    double doubleArr[3] = {1.1, 2.2, 3.3};
    char charArr[3] = {'a', 'b', 'c'};

    // 배열로 선언한 변수들은 메모리의 연속된 공간에 할당
    // int : 4바이트씩 주소 증가
    for(auto it = begin(arr1); it != end(arr1); ++it) {
        cout << it << " " << endl;
    } 

    cout << endl;

    // double : 8바이트씩 주소 증가
    for(auto it = begin(doubleArr); it != end(doubleArr); ++it) {
        cout << it << " " << endl;
    } 

    cout << endl;

    // char : 1바이트씩 주소 증가
    for(auto it = begin(charArr); it != end(charArr); ++it) {
        cout << static_cast<void*>(it) << " " << endl;
    } 

    cout << endl;

    // 배열 제어
    cout << "arr1[0] : " << arr1[0] << endl;
    cout << "arr1[3] : " << arr1[3] << endl;

    arr1[4] = 60;

    return 0;

}