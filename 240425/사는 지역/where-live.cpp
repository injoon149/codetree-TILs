#include <iostream>
#include <string>
using namespace std;

class information
{
    public:
    string name;
    string bungee;
    string area;
    information(string name = "A", string bungee = "a", string area = "a")
    {
        this->name = name;
        this->bungee = bungee;
        this->area = area;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name;
    string bungee;
    string area;
    information infor[n];
    string max = "a";
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> name >> bungee >> area;
        infor[i] = information(name, bungee, area);
        if(max < name)
        {
            max = name;
            sum = i;
        }
    }
    cout << "name " << infor[sum].name << endl;
    cout << "addr " << infor[sum].bungee << endl;
    cout << "city " << infor[sum].area;
    return 0;
}