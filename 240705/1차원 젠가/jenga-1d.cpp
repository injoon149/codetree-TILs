#include <iostream>
#include <vector>
using namespace std;

vector<int> block(int a, int b, vector<int> v)
{
    for(int i = a-1; i<= b-1; i++)
    {
        v[i] = 0;
    }
    vector<int> tmp;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] != 0)
        {
            tmp.push_back(v[i]);
        }
    }
    return tmp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v;
    int num, s1, e1, s2, e2;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    cin >> s1 >> e1;
    vector<int> v2 = block(s1, e1, v);
    cin >> s2 >> e2;
    vector<int> v3 = block(s2, e2, v2);
    cout << v3.size() << endl;
    for(int i = 0; i<v3.size(); i++)
    {
        cout << v3[i] << endl;
    }
    return 0;
}