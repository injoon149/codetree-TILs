#include <iostream>
#include <vector>
using namespace std;

int binary_search(long long num, const vector<long long>& v)
{
    int left = 0;
    int right = v.size()-1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(v[mid] == num) return mid+1;
        if(v[mid] > num) right = mid -1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
        cout << binary_search(num, v) << endl;
    }
    return 0;
}