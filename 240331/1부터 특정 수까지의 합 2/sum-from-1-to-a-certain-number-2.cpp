#include <iostream>
using namespace std;

int add(int n)
{
    if(n == 1) return 1;
    else return add(n-1) + n;
        
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << add(n);
    return 0;
}