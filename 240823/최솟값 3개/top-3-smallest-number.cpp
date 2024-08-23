#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> smallest;
    for(int i = 0; i < n; i++) {
        cin >> num;
        smallest.push_back(num);
        if(smallest.size() < 3) {
            cout << "-1" << endl;
        } else {
            if(smallest.size() > 3) {
                smallest.pop_back();
            }
            sort(smallest.begin(), smallest.end());
            long long result = (long long)smallest[0] * smallest[1] * smallest[2];
            cout << result << endl;
        }
    }
    return 0;
}