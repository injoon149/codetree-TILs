#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    int max = 0;
    for(int i = 0; i<=c; i++)
    {
        for(int j = 0; j<=c; j++)
        {
            if((a * i + b * j) > c) continue;
            else
            {
                if(max < a*i+b*j)
                {
                    max = a*i+b*j;
                }
            }
        }
    }
    cout << max;
    return 0;
}