#include <iostream>
using namespace std;

void printStar(int n)
{
    if(n ==0) return;
    else {
        printStar(n-1);
        for(int i = 0; i<n; i++)
        {
            cout <<"*";
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printStar(n);
    return 0;
}