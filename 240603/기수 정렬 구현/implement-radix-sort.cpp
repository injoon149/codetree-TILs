#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100000
#define MAX_K 6
#define MAX_DIGIT 10

int n;
vector<int> v;

void radix_sort()
{
    int p = 1;
    for(int pos = 0; pos < MAX_K; pos++)
    {
        vector<int> arr_new[MAX_DIGIT];
        for(int i = 0; i<n; i++)
        {
            int digit = (v[i]/p)%10;
            arr_new[digit].push_back(v[i]);
        }

        int index = 0;
        for(int i = 0; i<MAX_DIGIT; i++)
        {
            for(int j = 0; j<(int)arr_new[i].size(); j++)
            {
                v[index++] = arr_new[i][j];
            }
        }
        p *= 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    radix_sort();
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    
    return 0;
}