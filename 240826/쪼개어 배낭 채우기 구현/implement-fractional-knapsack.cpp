#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long m;
    cin >> n >> m;
    double w, v;
    priority_queue<pair<double,double>> pq;
    for(int i = 0; i<n; i++)
    {
        cin >> w >> v;
        pq.push(make_pair(v/w, w));
    }
    double value = 0.0;
    for(int i = 0; i<n; i++)
    {
        if(m == 0) break;
        pair<double,int> pd = pq.top();
        if(m >= pd.second)
        {
            value += (pd.first * pd.second);
            m -= pd.second;
        }
        else
        {
            value += (pd.first * m);
            m = 0;
        }
        pq.pop();
    }
    cout << fixed;
    cout.precision(3);
    cout << value;
    return 0;

}