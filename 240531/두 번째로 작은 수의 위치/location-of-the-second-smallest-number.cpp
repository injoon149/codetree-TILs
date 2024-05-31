#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int a[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    int myarr[MAX_N+1] = {};
    for(int i = 1; i<=n; i++)
    {
        myarr[i] = a[i];
    }
    sort(myarr+1, myarr+n+1);

    bool isexist = false;
    int low2 = 0;
    for(int i = 1; i<=n; i++)
    {
        if(myarr[i] != myarr[1]) {
            low2 = myarr[i];
            isexist = true;
            break;
        }
    }

    if(isexist == false) {
        cout << -1;
        return 0;
    }

    int ansidx = -1;
    for(int i = 1; i<=n; i++)
    {
        if(a[i] == low2) {
            if(ansidx != -1) {
                cout << -1;
                return 0;
            }
            ansidx = i;
        }
    }
    cout << ansidx;
    return 0;
}