#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, k, num;
    cin >> n >> m >> k;
    vector<int> v(n, 3);
    int cnt = 0;
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        v[num]--;
        for(int j = 0; j<v.size(); j++)
        {
            if(v[j] == 0) 
            {
                cout << j;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;

}