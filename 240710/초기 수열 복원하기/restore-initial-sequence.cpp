#include <iostream>
#include <algorithm>

#define MAX_N 1000
using namespace std;

int n;
int a[MAX_N];
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i<n-1; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i<=n; i++)
    {
        //수열의 첫 번째 수가 i일때
        arr[0] = i;

        for(int j = 1; j<n; j++)
        {
            arr[j] = a[j-1] - arr[j-1];
            //a[j-1]는 arr[j] + arr[j-1]의 값이기 때문에, 이 식을 이용하면
            //arr[0]에서 arr[1]을, arr[1]에서 arr[2]를 차근차근 알 수 있음
        }

        //arr수열에 1부터 n까지의 값이 한 번씩 이용되는지 확인
        //satisfied : 한 번씩 이용될때
        bool satisfied = true;
        bool exist[MAX_N+1] = {};
        for(int j = 0; j<n; j++)
        {
            if(arr[j] <=0 || arr[j] > n) satisfied = false;
            else
            {
                if(exist[arr[j]]) satisfied = false;
                exist[arr[j]] = true;
            }
        }
        if(satisfied) {
            for(int j = 0; j<n; j++)
            {
                cout << arr[j] << " ";
            }
        }
    }
    return 0;
}