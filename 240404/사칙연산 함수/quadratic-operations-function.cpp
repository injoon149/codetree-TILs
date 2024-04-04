#include <iostream>
using namespace std;

void solution(int a, char o, int c)
{
    if(o == '+')
    {
        cout << a <<" "<< o <<" "<< c << " = " << a+c;
    }
    else if(o == '-')
    {
        cout << a <<" "<< o <<" "<< c << " = " << a-c;
    }
    else if(o == '*')
    {
        cout << a <<" "<< o <<" "<< c << " = " << a*c;
    }
    else if(o == '/')
    {
        cout << a <<" "<< o <<" "<< c << " = " << a/c;
    }
    else cout << "False";

}

int main() {
    int a = 0;
    char o = 'a';
    int c = 0;
    cin >> a >> o >> c;
    solution(a, o, c);
    // 여기에 코드를 작성해주세요.
    return 0;
}