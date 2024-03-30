#include <iostream>
using namespace std;

void printHello(int n)
{
    if(n == 0) return;
    else {
        printHello(n-1);
        cout << "HelloWorld" << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printHello(n);
    return 0;
}