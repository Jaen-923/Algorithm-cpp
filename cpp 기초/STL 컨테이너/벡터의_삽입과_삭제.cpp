#include <iostream>
#include <vector>

using namespace std;

int name() {
    
    vector<int> v = {2, 3, 4, 5};

    // push_back() : 맨 뒤에 원소를 삽입
    v.push_back(6);

    // pop_back() : 맨 뒤에 원소 삭제
    v.pop_back();

    // insert(원소를 삽입할 주소, 삽입할 값) : 원소 삽입 메서드
    // v.begin() : v의 시작 주소
    v.insert(v.begin(), 1);

    // erase() : 원소 삭제 메서드
    v.erase(v.begin());

    // 벡터의 맨 앞에 원소를 삽입하거나 삭제해야 한다면 다른 컨테이너를 사용할 것. 매우 비효율적 O(N)
    // 벡터의 맨 뒤에서는 삽입, 삭제 연산 효율적

    return 0;
}