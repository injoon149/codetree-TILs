#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n <= 2) 
    {
        cout << 0;
        return 0;
    }
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i<s.size()-2; i++)
    {
        if(s[i] == 'C')
        {
            for(int j = i+1; j<s.size()-1; j++)
            {
                if(s[j] == 'O') 
                {
                    for(int k = j+1; k<s.size(); k++)
                    {
                        if(s[k] == 'W') cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}