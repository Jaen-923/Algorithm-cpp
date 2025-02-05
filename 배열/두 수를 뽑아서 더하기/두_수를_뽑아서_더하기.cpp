#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> v) {
    
    // 셋 선언
    set<int> s;

    // 벡터에서 두 수를 뽑아 셋에 저장
    for (auto i = 0; i != v.size()-1; ++i){
        for(auto j = i+1; j != v.size(); ++j) {
            s.insert(v[i]+v[j]);
        }

    }

    // 셋을 벡터로 변환
    vector<int> newV(s.begin(), s.end());

    // 벡터 반환
    return newV;
}

int main() {

    vector<int> numbers = {5, 0, 2, 7};
    vector<int> newV = solution(numbers);

    for(auto it = newV.begin(); it != newV.end(); ++it) {
        cout << *it << " " ;
    }

    return 0;

}