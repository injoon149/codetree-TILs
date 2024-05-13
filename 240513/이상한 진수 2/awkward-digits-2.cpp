#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int conversion(int num)
{
    string binary;
    binary = to_string(num);

    int sum = 0;
    for(int i = 0; i<(int)binary.size(); i++)
    {
        sum = sum * 2 + (binary[i] - '0');
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    int max = 0;
    int num = 0;
    string s = to_string(a);
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '0')
        {
            s[i] = '1';
            if(max < stoi(s)) 
            {
                max = stoi(s);
               
            }
            s[i] = '0';
        }
        else
        {
            s[i] = '0';
            if(max < stoi(s)) 
            {
                max = stoi(s);
            }
            s[i] = '1';
        }
    }
    cout << conversion(max);
    



    return 0;
}