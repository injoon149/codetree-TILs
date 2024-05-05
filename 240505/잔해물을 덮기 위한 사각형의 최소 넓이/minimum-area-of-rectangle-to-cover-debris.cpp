#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<vector<int>> v(2001, vector<int>(2001, 0));
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i<=x2; i++)
    {
        for(int j = y1; j<=y2; j++)
        {
            v[i+1000][j+1000] = 1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1+1; i<x2; i++)
    {
        for(int j = y1+1; j<y2; j++)
        {
            if(v[i+1000][j+1000] == 1)
            {
                v[i+1000][j+1000] = 2;
            }
        }
    }
    int cnt = 0;
    int min, max;
    vector<int> v1;
    vector<int> v2;
    for(int i = 0; i<2001; i++)
    {
        for(int j = 0; j<2001; j++)
        {
            if(v[i][j] == 1) {
                v1.push_back(i);
                v2.push_back(j);
            }
        }
    }
    if(v1.size() == 0 || v2.size() == 0) cout << 0;
    else
    {
    cout << (*max_element(v1.begin(), v1.end()) - *min_element(v1.begin(), v1.end())) * 
    (*max_element(v2.begin(), v2.end()) - *min_element(v2.begin(), v2.end()) );
    }
    return 0;
}