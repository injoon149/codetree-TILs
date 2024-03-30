#include <iostream>
using namespace std;

void printnum(int n)
{
    if(n == 0) return;
    else {
        printnum(n-1);
        cout << n <<" ";
      }
}

void printnumReverse(int n)
{
    if(n ==0) return;
    else {
        cout << n <<" ";
        printnumReverse(n-1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printnum(n);
    cout << endl;
    printnumReverse(n);
    return 0;
}