#include <iostream>
#include <string>
using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int flag = 0;
    for(int i = 0; i<s1.size(); i++)
    {
        if(s2[0] == s1[i])
        {
            flag = 1;
            for(int j = 1; j<s2.size(); j++)
            {
                if(s1[i+j] != s2[j])
                {
                    flag = 0;
                }
            }
            if(flag == 1)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "-1";

    return 0;
}