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
        int minimum = i;
        for(int j = i+1; j<n; j++)
        {
            if(v[j] < v[minimum])
            {
                minimum = j;
            }
        }
        int tmp = v[i];
        v[i] = v[minimum];
        v[minimum] = tmp;
    }
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}