#include <iostream>
#include <string>
using namespace std;

class Time {
    public:
        int time;
        string place, secretCode;

        Time(string secretCode, string place, int time) {
            this->secretCode = secretCode;
            this->place = place;
            this->time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string secretCode, place;
    int time;
    cin >> secretCode >> place >> time;
    Time time1(secretCode, place, time);
    cout << "secret code : " << time1.secretCode << endl;
    cout << "meeting point : " << time1.place << endl;
    cout << "time : " << time1.time;

    return 0;
}