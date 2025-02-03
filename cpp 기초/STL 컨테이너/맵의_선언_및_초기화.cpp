#include <map>
#include <string>

using namespace std;

// map : 키와 값을 쌍으로 갖는 컨테이너. map의 키값은 중복되지 않고 유일하다는 특징
// N개의 키가 있다면 키를 기준으로 검색, 삽입, 삭제를 하는데 시간 복잡도 = O(logN)
// 키 값을 기준으로 자동 정렬

map<string, double> studendGrades = {

    {"John", 3.7},
    {"Emma", 3.9},
    {"Sophia", 4.0}
    
};
