#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class infor
{
    public:
        string name;
        int key;
        int weight;
        infor(string name = "", int key = 0, int weight = 0)
        {
            this->name = name;
            this->key = key;
            this->weight = weight;
        }
};

bool cmp(infor a, infor b)
{
    return a.key < b.key;
}

int main()
{
    int n;
    cin >> n;
    string name;
    int key, weight;
    infor infors[n];
    for(int i = 0; i<n; i++)
    {
        cin >> name >> key >> weight;
        infors[i] = infor(name, key, weight);
    }
    sort(infors, infors+n, cmp);

    for(int i = 0; i<n-1; i++)
    {
        cout << infors[i].name <<" " << infors[i].key <<" " << infors[i].weight<<endl;
    }
    cout << infors[n-1].name <<" "<<infors[n-1].key<<" "<<infors[n-1].weight;
}