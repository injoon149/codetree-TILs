#include <iostream>
using namespace std;

int solution(int a, int b)
{
    int sum = 1;
    for(int i = 0; i<b; i++)
    {
        sum = sum * a;

    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << solution(a, b);
    return 0;
}