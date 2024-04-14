#include <iostream>
using namespace std;

bool check1(int m)
{
    if(1<= m && m<= 12) return 1;
    else return 0;
}

bool solution(int m, int d)
{
    if(check1(m) == 1) {
        if(m == 2) {
            if(1<=d && d<= 28){
                return 1;
            }
        }
        else if(m %2 == 0 && m<8)
        {
            if(1<=d && d<=30){
                return 1;
            }
        }
        else if(m %2 == 1 && m<8)
        {
            if(1<=d && d<= 31){
                return 1;
            }
        }
        else if(m%2 == 0)
        {
            if(1<=d && d<=31){
                return 1;
            }
        }
        else if(m%2 == 1){
            if(1<=d && d<=30){
                return 1;
            }
        }

    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;
    if(solution(m,d) == 1) cout << "Yes";
    else cout << "No";
    return 0;
}