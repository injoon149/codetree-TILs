#include <iostream>
using namespace std;

void printStars(int n)
{
    if(n == 0) return;
    else {
        for(int i = 0; i<n; i++)
        {
            cout << "* ";
        }
        cout << endl;
        printStars(n-1);
        for(int i = 0; i<n; i++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printStars(n);
    return 0;
}