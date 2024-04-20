#include <iostream>
using namespace std;

void modify(int *x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(*(x+i) % 2 == 0)
        {
            *(x+i) = *(x+i)/2;
        }
    }
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int v[n] = {0, };
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    modify(v, n);
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}