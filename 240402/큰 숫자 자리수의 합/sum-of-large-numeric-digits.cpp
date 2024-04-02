#include <iostream>
using namespace std;

int printNum(int num)
{
    if(1 <= num && num <= 9) return num;
    else return printNum(num / 10) + num % 10; 

}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << printNum(a*b*c);
    return 0;
}