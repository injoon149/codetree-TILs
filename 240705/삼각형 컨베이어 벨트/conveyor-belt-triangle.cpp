#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    vector<int> v(n, 0);
    vector<int> v2(n, 0);
    vector<int> v3(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v2[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v3[i];
    }
    if(n == 1)
    {
        for(int j = 0; j<t; j++)
        {
            int tmp1 = v3[0];
            v3[0] = v2[0];
            v2[0] = v[0];
            v[0] = tmp1;
        }
        cout << v[0] << endl;
        cout << v2[0] << endl;
        cout << v3[0];
    }
    else
    {
        for(int j = 0; j<t; j++)
        {
            int tmp1 = v[n-1];
            int tmp2 = v2[n-1];
            int tmp3 = v3[n-1];
            for(int k = n-2; k>=0; k--)
            {
                v[k+1] = v[k];
            }
            for(int k = n-2; k>=0; k--)
            {
                v2[k+1] = v2[k];
            }
            for(int k = n-2; k>=0; k--)
            {
                v3[k+1] = v3[k];
            }
            v[0] = tmp3;
            v2[0] = tmp1;
            v3[0] = tmp2;
        }
        for(int i = 0; i<n; i++)
        {
            cout << v[i] <<" ";
        }
        cout << endl;
        for(int i = 0; i<n; i++)
        {
            cout << v2[i] <<" ";
        }
        cout << endl;
        for(int i = 0; i<n; i++)
        {
            cout << v3[i] << " ";
        }
    }
    
    return 0;
}