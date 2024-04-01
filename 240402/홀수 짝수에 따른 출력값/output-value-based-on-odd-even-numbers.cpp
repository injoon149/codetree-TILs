#include <iostream>
using namespace std;

int sum = 0;

int printNum(int n)
{
    if(n == 1 || n == 2) return n;
    else {
        return n+ printNum(n-2);
    } 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << printNum(n);
    return 0;
}