#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    vector<int> v4;
    for(int i = 0; i<s.size(); i++)
    {
        v.push_back(s[i] - '0');
    }
    for(int i = 0; i<v.size()-1; i++)
    {
        for(int j = i+1; j<v.size(); j++)
        {
            if(v[i] == 0 && v[j] == 0)
            {
                v[i] = 1;
                v[j] = 1;
                vector<int> v2;
                vector<int> v3;
                int max = 0;
                for(int k = 0; k<v.size(); k++)
                {
                    if(v[k] == 1)
                    {
                        v2.push_back(k);
                    }
                }
                for(int k = 0; k<v2.size()-1; k++)
                {
                    v3.push_back(v2[k+1] - v2[k]);
                }
                v4.push_back(*min_element(v3.begin(), v3.end()));
                v[i] = 0;
                v[j] = 0;
            }
            
        }
    }
    cout << *max_element(v4.begin(), v4.end());
    return 0;
}