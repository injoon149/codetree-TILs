#include <iostream>
using namespace std;

int printNum(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else {
        return printNum(n/3) + printNum(n-1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << printNum(n);
    return 0;
}