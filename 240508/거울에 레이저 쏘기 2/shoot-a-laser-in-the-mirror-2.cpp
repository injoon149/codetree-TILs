#include <iostream>
#define MAX_N 1000
#define DIR_NUM 4
using namespace std;

int n;
char arr[MAX_N][MAX_N];
int start_num;
int x, y, move_dir;

void Initialize(int num) {
    if(num <= n) {
        x = 0; y = num-1; move_dir = 0;
    }
    else if(num <= 2* n){
        x = num - n - 1; y = n-1; move_dir = 1;
    }
    else if(num <= 3*n) {
        x = n-1; y = n - (num - 2*n); move_dir = 2;
    }
    else {
        x = n - (num - 3*n); y = 0; move_dir = 3;
    }
}

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

void Move(int next_dir) {
    int dx[DIR_NUM] = {1, 0, -1, 0};
    int dy[DIR_NUM] = {0, -1, 0, 1};

    x += dx[next_dir];
    y += dy[next_dir];
    move_dir = next_dir;
}

int Simulate() {
    int move_num = 0;
    while(InRange(x, y)) {
        if(arr[x][y] == '/')
        {
            Move(move_dir ^ 1);
        }
        else Move(3 - move_dir);
        move_num +=1;
    }
    return move_num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> start_num;

    Initialize(start_num);
    int move_num = Simulate();

    cout << move_num;
    return 0;
}