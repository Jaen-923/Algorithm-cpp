#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v = { 1, 2, 2, 3, 3, 4, 5, 6, 7, 7, 8, 10 };

    // unique(시작 반복자, 끝 반복자) : 중복되는 원소들은 뒤로 밀어내고 중복되지 않은 원소들만 남겨 새로운 범위의 끝 반복자를 반환

    // 중복 요소 제거
    auto newEnd = unique(v.begin(), v.end()); // 중복되지 않은 원소 범위의 마지막 원소 바로 다음

    for (auto it = v.begin(); it !=  newEnd; ++it) {
        cout << *it << " ";
    }

    cout << endl;

    cout << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;

}