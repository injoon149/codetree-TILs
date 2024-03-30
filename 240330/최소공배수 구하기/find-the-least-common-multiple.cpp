#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int g = gcd(n, m);
    cout << g * (n/g) * (m/g);
    return 0;
}