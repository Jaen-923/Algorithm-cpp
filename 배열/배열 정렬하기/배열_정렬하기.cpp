#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

vector<int> solution(vector<int> v) {

    sort(v.begin(), v.end());

    return v;
}

vector<int> bubbleSolution(vector<int> v) {

    for(auto i = 0; i < v.size() - 1 ; ++i) {
        for(auto j = 0; j <v.size()-i-1; ++j) {
            if (v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }

    return v;
}

int main() {

    vector<int> v(50000);
    for (int i = 0; i < 30000; ++i){
        v[i] = i+1;
    }

    clock_t startSort = clock();
    vector<int> solutionV = solution(v);
    clock_t endSort = clock();
    double timeSort = double(endSort - startSort) / CLOCKS_PER_SEC;

    clock_t startBubble = clock();
    vector<int> bubbleV = bubbleSolution(v);
    clock_t endBubble = clock();
    double timeBubble= double(endBubble - startBubble) / CLOCKS_PER_SEC;

    // for(auto it = solutionV.begin(); it != solutionV.end(); ++it) {
    //     cout << *it << " " << endl;
    // }

    cout << endl;

    cout << "버블 정렬 시간 : " << timeBubble << endl;
    cout << "std::sort 시간 : " << timeSort << endl;

}