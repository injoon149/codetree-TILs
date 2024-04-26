#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<string, string, string> data[100];


int main() {
    // 여기에 코드를 작성해주세요.
    tuple<int, int, int> first = make_tuple(2100, 12, 31);
    int n;
    cin >> n;
    string date, day, weather;
    int y, m, d;
    string daydream;
    for(int i = 0; i<n; i++)
    {
        cin >> date >> day >> weather;
        data[i] = make_tuple(date, day, weather);
        y = stoi(date.substr(0, 4));
        m = stoi(date.substr(5, 2));
        d = stoi(date.substr(8, 2));

        if(weather == "Rain")
        {
            if(y < get<0>(first))
            {
                first = make_tuple(y,m,d);
                daydream = day;
            }
            else if(y == get<0>(first))
            {
                if(m < get<1>(first))
                {
                    first = make_tuple(y,m,d);
                    daydream = day;
                }
                else if(m == get<1>(first))
                {
                    if(d < get<2>(first))
                    {
                        first = make_tuple(y,m,d);
                        daydream = day;
                    }
                }
            }
        }
    }
    if(get<1>(first) < 10 && get<2>(first) >=10)
    {
        cout << get<0>(first) <<"-0"<<get<1>(first)<<"-"<<get<2>(first)<<" "<<daydream<<" Rain"; 
    }
    else if(get<1>(first) <10 && get<2>(first) < 10)
    {
        cout << get<0>(first) <<"-0"<<get<1>(first)<<"-0"<<get<2>(first)<<" "<<daydream<<" Rain"; 
    }
    else if(get<1>(first)>=10 && get<2>(first) < 10)
    {
        cout << get<0>(first) <<"-"<<get<1>(first)<<"-0"<<get<2>(first)<<" "<<daydream<<" Rain"; 
    }
    else cout << get<0>(first) <<"-"<<get<1>(first)<<"-"<<get<2>(first)<<" "<<daydream<<" Rain"; 
    return 0;
}