#include <iostream>
using namespace std;

int solution(int arr[], int m)
{
    int sum = 0;
    while(m != 1)
    {
        sum += arr[m-1];
        if(m%2 == 0) m = m/2;
        else m -= 1;
    }
    sum += arr[0];
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr[n] = {0, };
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << solution(arr, m);

    return 0;
}