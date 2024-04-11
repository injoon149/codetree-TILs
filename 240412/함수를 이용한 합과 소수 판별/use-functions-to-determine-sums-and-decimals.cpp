#include <iostream>
#include <cmath>
using namespace std;

bool num1(int num)
{
    for(int i = 2; i<= sqrt(num); i++)
    {
        if(num % i == 0) return true;
    }
    return false;
}

bool num2(int num)
{
    if((num / 10 + num % 10) %2 == 0) return false;
    else return true;
}

int solution(int a, int b)
{
    int sum = 0;
    for(int i = a; i<=b; i++)
    {
        if(num1(i) == false && num2(i) == false)
        {
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