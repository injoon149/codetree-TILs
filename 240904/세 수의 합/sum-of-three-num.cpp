#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> numbers[i];
    }
    int count = 0;

    for(int i = 0; i<n-2; i++)
    {
        unordered_map<int,int> freq_map;
        int current_sum = k - numbers[i];

        for(int j = i+1; j<n; j++)
        {
            int complement = current_sum - numbers[j];

            if(freq_map[complement] > 0)
            {
                count += freq_map[complement];
            }
            freq_map[numbers[j]]++;
        }
    }
    cout << count << endl;
    return 0;
}