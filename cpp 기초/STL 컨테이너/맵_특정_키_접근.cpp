#include <iostream>
#include <map>

using namespace std;

int main() {

    // 맵 생성
    map<string, int> studentScores;

    // 키-값 쌍 추가
    studentScores["Alice"] = 95;
    studentScores["Bob"] = 88;
    studentScores["Charlie"] = 92;

    // [] 연산자를 사용하여 키에 접근 - 키가 있는 경우
    int score1 = studentScores["Alice"];
    cout << score1 << endl;

    // [] 연산자를 사용하여 키에 접근 - 키가 없는 경우, 오류가 발생하지 않고 새로운 키가 생성
    int score2 = studentScores["rabbit"];
    cout << score2 << endl; // 출력값 0

    // find() 메서드를 사용하여 키에 접근
    auto it = studentScores.find("Charlie");
    if( it!=studentScores.end() ) {

        // map에서 각 원소는 하나의 pair로 저장되며, first는 키를, second는 값
        int score3 = it->second;
        cout << score3 << endl; // 출력값 92

    }

    return 0; 

}