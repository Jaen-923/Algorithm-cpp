#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    // 정렬되지 않은 셋 : 해시 기반, 데이터를 자동 정렬하지 않음. 삽입, 삭제, 탐색의 시간 복잡도 O(1), 최악의 경우 O(N)
    unordered_set<int> myUnorderedSet;

    // 삽입
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(4);
    myUnorderedSet.insert(2);

    for (int num : myUnorderedSet) {
        cout << num << " ";
    }

    cout << endl;

    return 0;

}