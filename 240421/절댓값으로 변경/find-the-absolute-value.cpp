#include <iostream>
using namespace std;

void modify(int* a, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(*(a+i) < 0)
        {
            *(a+i) = (-1) * *(a+i);
        }
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n] = {0, };
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    modify(arr, n);
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}