#include <iostream>
using namespace std;

int printNum(int n) {
    if(n == 1){
        return 0;
    } 
    else {
        if(n%2 == 0) {
            return printNum(n/2) + 1;
        }
        else {
            return printNum(3*n+1) +1;

        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << printNum(n);
    return 0;
}