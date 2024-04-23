#include <iostream>
#include <algorithm>
using namespace std;

int solution(int arr[], int n)
{
    sort(arr, arr+n);
    return arr[n/2];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    int arr[n] = {0, };
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            cout << solution(arr, i) <<" ";
        }
    }
    return 0;
}