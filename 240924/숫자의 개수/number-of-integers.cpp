#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerbound(long long target, const vector<long long>& v)
{
    int left = 0;
    int right = v.size() - 1;
    int min_idx = v.size();
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(v[mid] >= target)
        {
            right = mid - 1;
            min_idx = min(min_idx, mid);
        }
        else left = mid+1;
    }
    return min_idx;
}

int upperbound(long long target, const vector<long long>& v)
{
    int left = 0;
    int right = v.size()-1;
    int min_idx = v.size();
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(v[mid] > target)
        {
            right = mid - 1;
            min_idx = min(min_idx, mid);
        }
        else left = mid + 1;
    }
    return min_idx;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    vector<long long> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    long long num;
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        cout << upperbound(num, v) - lowerbound(num, v) << endl;
    }
    return 0;
}