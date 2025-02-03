#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> numbers = {1, 2, 3, 4, 5};
    int targets[] = {3, 7}; // 원소가 3, 7 인 배열

    for (int target : targets) { // targets 배열에 들어있는 값들을 하나씩 target에 대입하여 반복

        // find() : set에 특정 원소가 있는지 확인하는 메서드. 찾은 값을 가리키는 반복자(iterator)를 반환. 만약 값이 없으면 numbers.end()를 반환
        // set의 크기가 N일 때 find() 메서드의 시간 복잡도 = O(logN)
        auto it = numbers.find(target);

        if (it != numbers.end()) {
            cout << "원소 " << target << "를 찾았습니다! 값: " << *it << endl;
        } else {
            cout << "원소 " << target << "를 찾지 못했습니다." << endl;
        }
    }

    return 0;
}