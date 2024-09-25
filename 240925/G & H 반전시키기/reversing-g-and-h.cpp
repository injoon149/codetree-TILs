#include <iostream>
#include <string>
using namespace std;

int min_flips(int n, const string& initial, const string& target)
{
    int flips = 0;
    bool in_flip = false;

    for(int i = 0; i<n; ++i)
    {
        if(initial[i] != target[i])
        {
            if(!in_flip)
            {
                flips++;
                in_flip = true;
            }
        }
        else
        {
            in_flip = false;
        }
    }
    return flips;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string initial, target;

    cin >> n;
    cin >> initial;
    cin >> target;
    cout << min_flips(n, initial, target) ;
    return 0;
}