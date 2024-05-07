#include <iostream>
#include <cmath>
using namespace std;

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };


bool InRange(int x, int y, int n)
{
    return (0 < x && x <= n && 0 < y && y <= n);
}

int GetDir(char a) {
    if (a == 'R') return 0;
    else if (a == 'D') return 3;
    else if (a == 'U') return 1;
    else return 2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >> d;
    int move_dir = GetDir(d);
    for (int i = 1; i <= t; i++)
    {
        if (InRange(r + dx[move_dir], c + dy[move_dir], n))
        {
            r = r + dx[move_dir];
            c = c + dy[move_dir];
        }
        else {
            if (move_dir == 2) move_dir = 0;
            else if (move_dir == 1) move_dir = 3;
            else if (move_dir == 0) move_dir = 2;
            else move_dir = 1;
        }
    }
    cout << r << " " << c;
    return 0;
}