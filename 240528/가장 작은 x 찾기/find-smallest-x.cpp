#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> vx(n, 0);
    vector<int> vy(n, 0);
    int min = 10001;
    for(int i = 0; i<n; i++)
    {
        cin >> vx[i] >> vy[i];
    }
    for(int i = 1; i<5001; i++)
    {
        int flag = 0;
        int num = i;
        for(int j = 0; j<n; j++)
        {
            num = num * 2;

            if((num >= vx[j]) && (num <=vy[j]))
            {
                flag = 1;
            }
            else 
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1) 
        {
            if(min > i) min = i;
        }
    }
    cout << min;
    return 0;
}