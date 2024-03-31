#include <iostream>
using namespace std;

int sum = 0;

int division(int n)
{
    if(n == 1) return sum;

    else if(n%2 == 0) {
        sum++;
        return division(n/2);
        
    }
    else {
        sum++;
        return division(n/3);
        
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << division(n);
    return 0;
}