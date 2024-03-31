#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int printNum(int n)
{
    if(n <10 ) return n*n;
    else return printNum(n/10) + pow(n%10, 2);

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << printNum(n);

    return 0;
}