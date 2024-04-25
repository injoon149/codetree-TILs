#include <iostream>
using namespace std;

class information
{
    public:
    char codename;
    int score;

    information(char codename = 'a', int score = 0)
    {
        this->codename = codename;
        this->score = score;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    char codename;
    int score;
    int min = 101;
    int code = 0;
    information infor[5];
    for(int i = 0; i<5; i++)
    {
        cin >> codename >> score;
        if(score < min)
        {
            min = score;
            code = i;
        }
        infor[i] = information(codename, score);
    }
    cout << infor[code].codename <<" " << infor[code].score;

    return 0;
}