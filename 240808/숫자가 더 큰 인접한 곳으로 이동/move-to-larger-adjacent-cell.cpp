#include <iostream>
#include <vector>

#define DIR_NUM 4
#define MAX_N 100
using namespace std;

int n;
int curr_x, curr_y;
int a[MAX_N+1][MAX_N+1];

vector<int> visited_nums;

bool InRange(int x, int y) {
    return 1 <= x && x <= n && 1 <= y && y <= n;
}

bool CanGo(int x, int y, int curr_num) {
    return InRange(x, y) && a[x][y] > curr_num;
}

bool Simulate() {
    int dx[DIR_NUM] = {-1,1,0,0};
    int dy[DIR_NUM] = {0,0,-1,1};

    for(int i = 0; i<DIR_NUM; i++) {
        int next_x = curr_x + dx[i];
        int next_y = curr_y + dy[i];

        if(CanGo(next_x, next_y, a[curr_x][curr_y])) {
            curr_x = next_x;
            curr_y = next_y;
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> curr_x >> curr_y;

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    visited_nums.push_back(a[curr_x][curr_y]);

    while(true) {
        bool greater_number_exist = Simulate();

        if(!greater_number_exist) break;
        visited_nums.push_back(a[curr_x][curr_y]);
    }

    for(int i = 0; i<(int)visited_nums.size(); i++)
    {
        cout << visited_nums[i] << " ";
    }
    return 0;
}