#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i == 0) return false;
        
    }
    return true;
}

int solution(int a, int b)
{
    int sum = 0;
    for(int i = a; i<=b; i++)
    {
        if(isPrime(i) == true)
        {
            sum += i;
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