#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(v[j] > v[j+1])
            {
                int tmp = v[j+1];
                v[j+1] = v[j];
                v[j] = tmp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}