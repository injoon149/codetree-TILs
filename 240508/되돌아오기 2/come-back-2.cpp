#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int dir_num = 3;
    int x = 100001, y = 100001;
    int cnt = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'L') 
        {
            if(dir_num == 0) dir_num = 3;
            else dir_num = dir_num-1;
        }
        else if(s[i] == 'R')
        {
            dir_num = (dir_num+1)%4;
        }
        else
        {
            x += dx[dir_num];
            y += dy[dir_num];
        }
        cnt++;
        if(x == 100001 && y == 100001) break;
    }
    if(cnt == s.size()) cout << -1;
    else cout << cnt;
    return 0;
}