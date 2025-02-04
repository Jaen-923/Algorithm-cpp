#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // 모든 가능한 순열 출력
    // next_permutation() : 가능한 모든 순열 생성. 가능한 순열이 있으면 true, 없으면 false 반환
    // 가능한 모든 순열을 생성하려면 데이터가 사전순으로 정렬된 상태여야 함.
    do {
        for(int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    // while (next_permutation(v.begin(), v.end())) { // 조건을 먼저 검사함
    // for (int i : v) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // }


    return 0;
    

}