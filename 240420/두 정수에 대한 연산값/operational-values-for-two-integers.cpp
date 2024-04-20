#include <iostream>
using namespace std;

void modify(int& a, int& b)
{
    if(a > b) {
        a += 25;
        b = b * 2;
    }
    else {
        b += 25;
        a = a * 2;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    modify(a, b);
    cout << a <<" "<< b;

    return 0;
}