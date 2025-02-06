#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> result;

    result.assign(arr1.size(), vector<int>(arr2[1].size(), 0));

    for(int i=0; i<arr1.size(); ++i){ // arr1 행 개수
        for(int j=0; j<arr2[1].size(); ++j) { // arr2 열 개수
            for(int k=0; k< arr2.size(); ++k){ // arr2 행 개수
                result[i][j] += arr1[i][k] * arr2[k][j];   
            }
            
        }
    }

    return result;
}

int main() {
    vector<vector<int>> arr1 = {{1, 4}, {3, 2}, {4, 1}};
    vector<vector<int>> arr2 = {{3, 3}, {3, 3}};

    vector<vector<int>> arr3 = solution(arr1, arr2);


    for(int i=0; i<arr3.size(); ++i) {
        for(int j=0; j<arr3[1].size(); ++j) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

}