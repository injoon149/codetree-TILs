#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(long long target, const vector<long long>& v)
{
    int left = 0;
    int right = v.size() - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(v[mid] == target) 
        {
            return 1;
        }
        else if(v[mid] > target)
        {
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    long long start, end;
    vector<long long> dot(n, 0);
    vector<long long> v;
    for(int i = 0; i<n; i++)
    {
        cin >> dot[i];
    }
    for(int i = 0; i<m; i++)
    {
        int cnt = 0;
        cin >> start >> end;
        v.clear();
        for(int j = start; j<=end; j++)
        {
            v.push_back(j);
        }
        for(int j = 0; j<dot.size(); j++)
        {
            cnt += binary_search(dot[j], v);
        }
        cout << cnt << endl;
    }
    return 0;
}