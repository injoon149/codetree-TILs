#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] <<" ";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    printVector(v);
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);



    return 0;
}