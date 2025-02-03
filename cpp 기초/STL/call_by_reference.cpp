#include <iostream>

using namespace std;

void modify(int& value) {

    value = 10;
    cout << "주소 : " << &value << endl;
    cout << "값 : " << value << "\n\n";;

}

int main() {

    int value = 5;
    cout << "주소 : " << &value << endl;
    cout << "값 : " << value << "\n\n";

    modify(value);
    cout << "값 : " << value << endl;

    return 0;

}