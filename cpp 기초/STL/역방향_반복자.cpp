#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> vec = {10, 20 ,30 ,40, 50};

    // rbegin() : 맨 마지막 원소 위치
    // rend() : 맨 처음 원소의 바로 직전 위치
    for(auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    auto result = find(vec.rbegin(), vec.rend(), 30);
    if (result != vec.rend()) {
        cout << "Found: " << *result << endl;
    }else {
        cout << "Not Found" << endl;
    }

    return 0;
}