#include <iostream>
#include <vector>
using namespace std;

bool InRange(int r, int c, int n)
{
    return (0<=r && r<n && 0<=c && c<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, r,c;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(n, 0));
    int cnt = 0;
    for(int i = 0; i<m; i++)
    {
        cin >> r >> c;
        v[r-1][c-1] = 1;
        if(InRange(r-1, c-2, n)) {
            if(v[r-1][c-2] == 1) cnt++;
        }
        if(InRange(r-2, c-1, n)) {
            if(v[r-2][c-1] == 1) cnt++;
        }
        if(InRange(r-1, c, n)){
            if(v[r-1][c] == 1) cnt++;
        }
        if(InRange(r, c-1, n)) {
            if(v[r][c-1] == 1) cnt++;
        }

        if(cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
        cnt = 0;
       
    }

    return 0;
}