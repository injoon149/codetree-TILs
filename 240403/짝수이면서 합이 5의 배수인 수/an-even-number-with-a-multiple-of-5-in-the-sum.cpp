#include <iostream>
using namespace std;

void solution(int n)
{
    if(n%2 == 0 && (n%10 + n/10)%5 == 0)
    {
        cout << "Yes";
    }
    else cout << "No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    solution(n);
    return 0;
}