#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int,int> num_map;
    int ele, num;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        cin >> ele;
        if(num_map.find(ele) == num_map.end())
        {
            num_map[ele] = 1;
        }
        else
        {
            num_map[ele]++;
        }
    }
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        cout << num_map[num] <<" ";
    }

    return 0;
}