#include <iostream>
#include <string>

using namespace std;

class Forecast {
    public:
        string date, day, weather;
        Forecast(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
};

Forecast ans = Forecast("9999-99-99", "", "");

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        string date, day, weather;
        cin >> date >> day >> weather;

        Forecast f = Forecast(date, day, weather);
        if(weather == "Rain")
        {
            if(ans.date >= f.date)
            {
                ans = f;
            }
        }
    }
    cout << ans.date <<" " << ans.day << " " << ans.weather;
    return 0;
}