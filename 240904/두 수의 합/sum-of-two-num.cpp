#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n, 0);
    unordered_map<int,int> map_num;

    for(int i = 0; i<n; i++)
    {
        cin >> numbers[i];
        map_num[numbers[i]]++;
    }
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        int num = numbers[i];
        int complement = k - num;

        if(map_num[k-num] >0)
        {
            count += map_num[complement];
            if(complement == num) count--;
        }

    }
    cout << count / 2 << endl;
    return 0;
}