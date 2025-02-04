#include <iostream>
#include <vector>

using namespace std;


// 보호 구문 : 본격적인 로직을 진행하기 전 예외 처리 코드를 추가하는 기법
double get_avg(const vector<int>& arr, int N) {

    if (arr.empty()) {
        return -1;
    }

    if (N == 0) {
        return -1;
    }

    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    return sum / N;

}

int main() {

    vector<int> v = {1, 2, 3, 4, 5}; 
    vector<int> v2 = {};

    cout << get_avg(v, v.size()) << endl;
    
    cout << get_avg(v2, v2.size()) << endl;

}