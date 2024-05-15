#include <iostream>
#include <algorithm>
#define DIR_NUM 8
using namespace std;

int n, m;

int dx[DIR_NUM] = {1,1,1,-1,-1,-1,0,0};
int dy[DIR_NUM] = {-1,0,1,-1,0,1,-1,1};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;
    char arr[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    //모든 좌표에서 확인
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(arr[i][j] == 'L')
            {
                for(int k = 0; k<DIR_NUM; k++)
                {
                    int curt = 1;
                    int curx = i;
                    int cury = j;
                    while(true)
                    {
                        int nx = curx + dx[k];
                        int ny = cury + dy[k];
                        if(InRange(nx, ny) == false) break;
                        else
                        {
                            if(arr[nx][ny] == 'E')
                            {
                                curt++;
                                curx = nx;
                                cury = ny;
                                if(curt == 3) 
                                {
                                    cnt++;
                                    break;
                                }
                            }
                            else break;
                        }

                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}