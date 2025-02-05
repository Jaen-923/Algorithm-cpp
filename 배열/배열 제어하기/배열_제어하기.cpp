#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;


vector<int> solution(vector<int> v) {
    sort(v.begin(), v.end());
    auto newEnd = unique(v.begin(), v.end());
    v.erase(newEnd, v.end());
    sort(v.rbegin(), v.rend());

    return v;
}

vector<int> solution2(vector<int> v) {
    set<int> s(v.begin(), v.end());
    vector<int> newV(s.begin(), s.end());
    sort(newV.rbegin(), newV.rend());

    return newV;
}

int main() {

    vector<int> v = {1, 3, 4, 5, 1, 2};
    vector<int> newV = solution2(v);

    for(auto it = newV.begin(); it != newV.end(); it++) {
        cout << *it << " ";
    }
}