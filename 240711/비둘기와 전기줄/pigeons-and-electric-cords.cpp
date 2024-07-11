#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int pigeon, location;
    vector<int> v(101, 2);
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> pigeon >> location;
        if(v[pigeon] == 0 && location == 1) 
        {
            v[pigeon] = 1;
            count++;
        }
        else if(v[pigeon] == 1 && location == 0)
        {
            v[pigeon] = 0;
            count++;
        }
        else if(v[pigeon] == 2)
        {
            v[pigeon] = location;
        }
    }
    cout << count;


    return 0;
}