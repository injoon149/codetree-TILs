#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(int scissor, int rock, int bo, vector<int> v1, vector<int> v2)
{
    int cnt = 0;
    for(int i = 0; i<v1.size(); i++)
    {
        if(v1[i] == rock && v2[i] == scissor) cnt++;
        else if(v1[i] == scissor && v2[i] == bo) cnt++;
        else if(v1[i] == bo && v2[i] == scissor) cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a1, a2;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i] >> v2[i];
    }
    int max_num = 0;
    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=3; j++)
        {
            for(int k = 1; k<=3; k++)
            {
                if(i != j && j != k && i != k)
                {
                    max_num = max(max_num, calculate(i,j,k,v1,v2));
                }
            }
        }
    }
    cout << max_num;

    return 0;
}