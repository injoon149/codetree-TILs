#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int set[6];
    int num;
    for(int i = 0; i<6; i++)
    {
        cin >> set[i];
    }
    sort(set, set+6);

    int first = set[0] + set[5];
    int second = set[1] + set[4];
    int third = set[2] + set[3];
    int min_num = min(first, second);
    int max_num = max(second, third);
    cout << abs(max_num - min_num);
    return 0;
}