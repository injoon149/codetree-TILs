#include <iostream>
using namespace std;

bool num1(int num)
{
    if(num % 2 == 0) return false;
    else return true;
}

bool num2(int num)
{
    if(num % 10 == 5) return false;
    else return true;
}

bool num3(int num)
{
    if(num % 3 == 0 && num % 9 != 0) return false;
    else return true;
}

int solution(int a, int b)
{
    int sum = 0;
    for(int i = a; i<=b; i++)
    {
        if(num1(i) && num2(i) && num3(i)) {
            sum++;
        }
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