#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    vector<int> v(n, 0);
    vector<int> v2(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v2[i];
    }
    if(n == 1)
    {
        for(int j = 0; j<t; j++)
        {
            int tmp3 = v2[0];
            v2[0] = v[0];
            v[0] = tmp3;
        }
        cout << v[0] << endl;
        cout << v2[0] << endl;
        return 0;
    }
    else if(n == 2)
    {
        for(int j = 0; j<t; j++)
        {
            int tmp4 = v2[1];
            int tmp5 = v[1];
            int tmp6 = v2[0];
            v[1] = v[0];
            v2[0] = tmp5;
            v2[1] = tmp6;
            v[0] = tmp4;
        }
        cout << v[0] << " " << v[1] << endl;
        cout << v2[0] << " " << v2[1];
        return 0;
    }
    else
    {
            for(int j = 0; j<t; j++)
    {
        int tmp1 = v2[n-1];
        int tmp2 = v2[0];
        v2[0] = v[n-1];
        for(int i = n-2; i>=0; i--)
        {
            v[i+1] = v[i];
        }
        for(int i = n-1; i>0; i--)
        {
            v2[i+1] = v2[i];
        }
        v[0] = tmp1;
        v2[1] = tmp2;
    }


    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i<v2.size(); i++)
    {
        cout << v2[i] <<" ";
    }
    }

    
    return 0;
}