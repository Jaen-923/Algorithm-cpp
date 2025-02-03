#include <set>
#include <iostream>

using namespace std;

set<int> s1; // 빈 셋 선언
set<int> s2 = {3, 1, 3, 2, 5};
set<int> s3(s2); // 다른 셋을 사용하여 초기화

// s2, s3 -> {1, 2, 3, 5}
// set은 원소를 대입할 때 동시에 내부에서 정렬 수행. set은 균형 이진트리로 구성
// 중복값을 허용 x