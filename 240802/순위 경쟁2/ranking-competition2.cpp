#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int s;
    string c;
    string stage="C";
    int ascore = 0, bscore = 0;
    int change = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> c >> s;    
        if(c == "A")
        {
            ascore += s;
        }
        else bscore += s;
        if(ascore < bscore) {
            if(stage != "B")
            {
                stage = "B";
                change++;
            }
        }
        else if(ascore > bscore) {
            if(stage != "A") 
            {
                stage = "A";
                change++;
            }
        }
        else
        {
            if(stage != "AB")
            {
                stage = "AB";
                change++;
            }
        }
    }
    cout << change;

    return 0;
}