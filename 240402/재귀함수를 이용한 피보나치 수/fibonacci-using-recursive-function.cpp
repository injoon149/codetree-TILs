#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}