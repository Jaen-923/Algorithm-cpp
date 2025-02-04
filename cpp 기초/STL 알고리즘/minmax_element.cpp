#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v = {1, 3, 5, 7, 2, 4, 6, -5};

    //max_element(), min_element() : 컨테이너 내에서 최댓값, 최솟값 위치 반환
    auto maxIt = max_element(v.begin(), v.end());
    auto minIt = min_element(v.begin(), v.end());

    cout << *maxIt << " " << *minIt << endl;

    return 0;

}