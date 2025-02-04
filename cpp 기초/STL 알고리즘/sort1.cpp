#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v = {4, 2, 5, 3, 1};

    // sort(시작 반복자, 끝 반복자) : 범위 내 원소들을 오름차순 정렬
    // 오름차순으로 정렬
    sort(v.begin(), v.end());

    for (auto it : v) {
        cout << it  << " ";
    }

    cout << endl;

    // 내림차순으로 정렬
    sort(v.rbegin(), v.rend());

    for (auto it : v) {
        cout << it << " ";
    }

    return 0;

}