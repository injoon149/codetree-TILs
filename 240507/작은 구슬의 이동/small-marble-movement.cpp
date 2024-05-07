#include <iostream>
#include <cmath>
using namespace std;

int n, t;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};


bool InRange(int x, int y)
{
    return ( 0 < x && x < n && 0 < y && y < n);
}

int GetDir(char a) {
    if(a == 'R') return 0;
    else if(a =='D') return 3;
    else if(a == 'U') return 1;
    else return 2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;
    int r,c;
    char d;
    cin >> r >> c >> d;
    int move_dir = GetDir(d);
    for(int i = 1; i<=t; i++)
    {
        if(InRange(r + dx[move_dir], c+dy[move_dir]))
        {
            r = r + dx[move_dir];
            c = c + dy[move_dir];
        }
        else{
            move_dir = abs(2 - move_dir);
        }
    }
    cout << r << " "<<c;
    return 0;
}