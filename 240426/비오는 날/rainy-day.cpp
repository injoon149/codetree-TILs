#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<string, string, string> data[100];
tuple<int, int, int> first = make_tuple(2100, 12, 31);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string date, day, weather;
    int year, month, day;
    for(int i = 0; i<n; i++)
    {
        cin >> date >> day >> weather;
        data[i] = make_tuple(date, day, weather);
        year = stoi(date.substr(0, 4));
        month = stoi(date.substr(5, 2));
        day = stoi(date.substr(8, 2));

        if(weather == "Rain")
        {
            
        }
    }
    return 0;
}