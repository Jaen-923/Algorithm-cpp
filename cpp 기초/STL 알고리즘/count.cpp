#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> v = { 1, 2, 3, 4, 5, 4, 5, 5 };

    // count(시작 반복자, 끝 반복자, 확인할 값) : 컨테이너 내에서 특정 값이 나타나는 횟수를 센다.
    // 5가 벡터 v에 몇 번 나타나는지 세기
    int ret = count(v.begin(), v.end(), 5);

    cout << ret << endl;

    return 0;

}