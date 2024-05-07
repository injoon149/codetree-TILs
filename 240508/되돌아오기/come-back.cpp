#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int dir_num(char d)
{
    if(d == 'N') return 3;
    else if(d == 'E') return 0;
    else if(d == 'S') return 1;
    else return 2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char d;
    int num;
    int startx = 1001, starty = 1001;
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> d >> num;
        for(int j = 1; j<=num; j++)
        {
            cnt++;
            startx += dx[dir_num(d)];
            starty += dy[dir_num(d)];
            if(startx == 1001 && starty == 1001) {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}