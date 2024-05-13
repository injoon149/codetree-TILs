#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int cnt = -1;
    int cnt_2 = 0;
    int sum = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            if(i > cnt) 
            {
                cnt = i;
                for(int j = i; j<s.size(); j++)
                {
                    if(s[j] == ')')
                    {
                        cnt_2++;
                    }
                }
            }
        }
        sum += cnt_2;
        cnt_2 = 0;
    }
    cout << sum;
    return 0;
}