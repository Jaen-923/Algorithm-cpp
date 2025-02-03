#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s = {1, 3, 2, 1, 5};

    // set의 모든 삽입, 삭제의 시간 복잡도는 O(logN)

    // 원소 4 삽입
    s.insert(4);

    // 원소 2 삭제
    s.erase(2);

    auto it = s.find(4);
    if (it != s.end()) {
        // erase() 메서드에서는 삭제할 원소의 값이 올 수도 있고, 삭제할 원소의 주소가 올 수도 있다.
        s.erase(it);
    }
    
    return 0;

}
