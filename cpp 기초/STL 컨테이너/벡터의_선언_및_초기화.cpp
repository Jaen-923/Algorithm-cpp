#include <vector>

using namespace std;

// 1차원 벡터

vector<int> v; // <int>를 <char>, <double> 등으로 바꿔서 사용 가능
vector<int> v2 = {1, 2, 3, 4, 5};
vector<int> v3(4, 3); // 벡터의 크기가 4, 모든 원소를 3으로 채움
vector<int> v4(v3);

// 2차원 벡터

vector<vector<int>> v5;

int rows = 3;
int cols = 4;
vector<vector<int>> v6(rows, vector<int>(cols)); // 초기화되지 않은 3행 4열 2차원 벡터

int val = 9;
vector<vector<int>> v7(rows, vector<int>(cols, val)); // 9로 초기화된 3행 4열 2차원 벡터

vector<vector<int>> v8 = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
