#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string c;
    int s;
    int ascore = 0, bscore = 0, cscore = 0;
    string stage = "ABC";
    int change = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> c >> s;
        if(c == "A") ascore += s;
        else if(c == "B") bscore += s;
        else cscore += s;
        if(ascore == bscore && bscore == cscore)
        {
            if(stage != "ABC")
            {
                stage = "ABC";
                change++;
            }
        }
        else if(ascore == bscore && bscore != cscore)
        {
            if(stage != "AB")
            {
                stage = "AB";
                change++;
            }
        }
        else if(ascore == cscore && bscore != cscore)
        {
            if(stage != "AC")
            {
                stage = "AC";
                change++;
            }
        }
        else if(bscore == cscore && bscore != ascore)
        {
            if(stage != "BC")
            {
                stage = "BC";
                change++;
            }
        }
        else if(ascore > bscore && ascore > cscore)
        {
            if(stage != "A")
            {
                stage = "A";
                change++;
            }
        }
        else if(bscore > ascore && bscore > cscore)
        {
            if(stage != "B")
            {
                stage = "B";
                change++;
            }
        }
        else if(cscore > ascore && cscore > bscore)
        {
            if(stage != "C")
            {
                stage = "C";
                change++;
            }
        }

    }
    cout << change;

    return 0;
}