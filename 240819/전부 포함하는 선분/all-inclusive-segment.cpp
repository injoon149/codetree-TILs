#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, x2;
    cin >> n;
    vector<int> start_points(n, 0);
    vector<int> end_points(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> start_points[i] >> end_points[i];
    }
    int min_length = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        int temp_min = INT_MAX;
        int temp_max = INT_MIN;

        for(int j= 0; j<n; j++)
        {
            if(j == i) continue;
            else
            {
                temp_min = min(temp_min, start_points[j]);
                temp_max = max(temp_max, end_points[j]);

            }
        }
        int current_length = temp_max - temp_min;
        min_length = min(min_length, current_length);
    }
    cout << min_length;

    return 0;
}