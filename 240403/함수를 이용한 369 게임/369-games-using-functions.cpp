#include <iostream>
#include <cmath>
using namespace std;

bool IsMagicNumber(int num)
{
    if(num % 3 == 0) return 1;
    else {
        while(true)
        {
            if(num == 0) return 0;
            else {
                if((num %10)%3 == 0) {
                    return 1;
                }
                else num = num / 10;
            }
        }
    }
    return 0;
}

int solution(int a, int b)
{
    int num = 0;
    for(int i = a; i<=b; i++)
    {
        if(IsMagicNumber(i) == 1)
        {
            num++;
        }

    }
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << solution(a, b);
    return 0;
}