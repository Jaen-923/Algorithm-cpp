#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;

    Point() : x(0), y(0) {}
    
    Point(int x, int y) : x(x), y(y) {}
};

// 사용자 정의 비교 함수
bool compare(const Point &a, const Point &b) {
    if(a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {

    vector<Point> points = {{3, 4}, {1, 2}, {3, 1}, {2, 5}};

    // sort(시작 반복자, 끝 반복자, 비교 함수) : 비교 함수의 반환값이 false 일때 원소의 위치를 바꾼다.
    // points 벡터를 사용자 정의 기준으로 정렬
    sort(points.begin(), points.end(), compare);

    for (const Point &p : points) {
        cout << "( " << p.x << ", " << p.y << " )";
    }

    cout << endl;

    return 0;


}