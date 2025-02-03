#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<string, int> myUnorderedMap;

    // 삽입
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 1;
    myUnorderedMap["cherry"] = 4;
    myUnorderedMap["date"] = 2;

    // unordered_map의 요소 출력
    for (const auto &pair : myUnorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;

}