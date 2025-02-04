#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};
    
    // binary_search(시작 반복자, 끝 반복자, 찾을 값) : 이진 탐색을 수행하고 원소가 있으면 true, 없으면 false 반환
    cout << binary_search(v.begin(), v.end(), 3) << endl;
    cout << binary_search(v.begin(), v.end(), 6);

    return 0;

}