#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_find(vector<int> v)
{
    int max_element = 0;
    int max_location = 0;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] > max_element)
        {
            max_element = v[i];
            max_location = i;
        }
    }
    return max_location;
}

int min_find(vector<int> v)
{
    int min_element = 10001;
    int min_location = 0;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] < min_element)
        {
            min_element = v[i];
            min_location = i;
        }
    }
    return min_location;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int block;
    vector<int> v;
    int sum = 0;
    int avg = 0;
    int k, k2;
    for(int i = 0; i<n; i++)
    {
        cin >> block;
        v.push_back(block);
        sum += block;
    }
    avg = sum / n;
    int cnt = 0;
    while(1)
    {
        if(max_find(v) == min_find(v)) break;
        else
        {
            for(int j = 0; j<v.size(); j++)
            {
                if(v[j] < avg)
                {
                    k = avg - v[j];
                    k2 = v[max_find(v)] - avg;
                    k = min(k, k2);
                    v[max_find(v)] -= k;
                    v[j] += k;
                    cnt += k;                  
                }
            }
        }
    }
    


    cout << cnt;
    return 0;
}