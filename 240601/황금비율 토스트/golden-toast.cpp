#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    char direction;
    char direction2;
    cin >> n >> m;
    list<char> v;
    string s;
    cin >> s;
    for(int i = 0; i<s.length(); i++)
    {
        v.push_back(s[i]);
    }
    auto it = v.end();
    
    for(int i = 0; i<m; i++)
    {
        cin >> direction;
        if(direction == 'L')
        {
            if(it != v.begin())
            {
                it--;
            }
        }
        else if(direction == 'R')
        {
            if(it != v.end())
            {
                it++;
            }
        }
        else if(direction == 'D')
        {
            if(it != v.end())
            {
                it == v.erase(it);     //바로 뒤에 있는 빵 제거
            }
        }
        else if(direction == 'P')
        {
            cin >> direction2;
            v.insert(it, direction2);

        }
    }
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }


    return 0;
}