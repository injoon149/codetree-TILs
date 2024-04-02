#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if(a%b == 0) return b;
    else {
        return gcd(b, a%b);
    }
}
int lcm(int a, int b)
{
    return gcd(a,b) * (a / gcd(a,b)) * (b /  gcd(a,b));
}



int multilcm(vector<int> v)
{
    int num = 1;
    for(int i = 0; i<v.size(); i++)
    {
        num =  lcm(num, v[i]);
    }
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << multilcm(v);

    return 0;
}