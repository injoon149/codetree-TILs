#include <iostream>
using namespace std;

int arr[1001];

int main() {
    // 여기에 코드를 작성해주세요.
    arr[2] = 1;
    arr[3] = 1;
    for(int i = 4; i<=1000; i++)
    {
        arr[i] = arr[i-2] + arr[i-3];
    }
    int n;
    cin >> n;
    cout << arr[n];
    return 0;
}