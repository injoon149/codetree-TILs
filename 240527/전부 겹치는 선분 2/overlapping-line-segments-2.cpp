#include <iostream>
#include <vector>
using namespace std;

bool solution1(int x1, int x2, int a1, int a2)
{
    if(x2 < a1 || a2 < x1) return 0;
    else return 1;
}

bool solution2(vector<int> vx, vector<int> vy, int k)
{
    for(int i = 0; i<vx.size(); i++)
    {
        for(int j = i+1; j<vy.size(); j++)
        {
            if(i == k || j ==k) continue;
            else
            {
                if(solution1(vx[i], vy[i], vx[j], vy[j]) == 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> vx(n, 0);
    vector<int> vy(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> vx[i] >> vy[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(solution2(vx, vy, i) == 1) 
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}