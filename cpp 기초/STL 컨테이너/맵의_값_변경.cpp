#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> myMap = {{"Apple", 1}, {"Banana", 2}, {"Cherry", 3}};

    // Banana 키에 해당하는 값을 10으로 수정
    myMap["Banana"] = 10;

    return 0;

}