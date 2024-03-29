#include <iostream>
using namespace std;

int num = 1;

void PrintRec(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << num << " ";
            if(num == 9) num = 1;
            else num++;
        }
        cout << endl;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintRec(n);
    return 0;
}