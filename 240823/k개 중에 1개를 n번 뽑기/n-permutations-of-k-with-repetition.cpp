#include <iostream>
#include <vector>
using namespace std;

int k = 1;
int n;
vector<int> v;

void print()
{
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
}

void choose(int k, int cnt) {
    if(cnt == n){
        print();
        return;
    }
    for(int i = 1; i<=k; i++)
    {
        v.push_back(i);
        choose(k, cnt+1);
        v.pop_back();
    }
}

int main()
{
    cin >> k >> n;
    choose(k, 0);
}