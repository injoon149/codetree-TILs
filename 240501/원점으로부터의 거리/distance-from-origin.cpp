#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Location
{
    public:
    int x, y, number;
    Location(int x=0, int y=0, int number = 0)
    {
        this->x = x;
        this->y = y;
        this->number =  number;
    }
};

bool cmp(Location a, Location b)
{
    if(abs(a.x+a.y) < abs(b.x+b.y)) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Location locations[n];
    for(int i = 0; i<n; i++)
    {
        cin >> locations[i].x >> locations[i].y;
        locations[i].number = i+1;
    }
    sort(locations, locations+n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout << locations[i].number<<endl;
    }


    return 0;
}