#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


    bool compare(pair<int,int> a, pair<int,int> b)
    {
        if(a.second == b.second)
        {
            return a.first > b.first;
        }
        else return a.second > b.second;
    }


int main()
{
    int n,k,num;
    unordered_map<int,int> map_num;

    cin >> n >> k;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        map_num[num]++;
    }
    vector<pair<int,int>> v(map_num.begin(), map_num.end());
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i<k; i++)
    {
        cout << v[i].first <<" ";
    }
    return 0;
}