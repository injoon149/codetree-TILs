#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, v, t;
    cin >> n >> m;
    vector<int> alocation;
    vector<int> blocation;
    int aloc = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v >> t;
        for(int j = 1; j<=t; j++)
        {
            alocation.push_back(aloc+j*v);
        }
        aloc += (v*t);
    }
    int bloc = 0;
    for(int i = 0; i<m; i++)
    {
        cin >> v >> t;
        for(int j = 1; j<=t; j++)
        {
            blocation.push_back(bloc+j*v);
        }
        bloc +=(v*t);
    }
    string s = "";
    int cnt = 0;
    for(int i = 0; i<alocation.size(); i++)
    {
        if(alocation[i] > blocation[i])
        {
            if(s != "a") 
            {
                s = "a";
                cnt++;
            }
        }
        else if(alocation[i] ==  blocation[i])
        {
            if(s != "ab")
            {
                s = "ab";
                cnt++;
            }
        }
        else
        {
            if(s != "b")
            {
                s = "b";
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}