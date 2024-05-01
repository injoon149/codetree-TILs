#include <iostream>
#include <algorithm>
using namespace std;

class Number
{
    public:
    int length;
    int num1;
    int num2;

    Number(int length=0, int num1=0, int num2=0)
    {
        this->length = length;
        this->num1 = num1;
        this->num2 = num2;
    }
};

bool cmp1(Number a, Number b)
{
    if(a.length == b.length)
    {
        return a.num1 < b.num1;
    }
    else return a.length < b.length;
}

bool cmp2(Number a, Number b)
{
    return a.num1 < b.num1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Number numbers[n];
    for(int i = 0; i<n; i++)
    {
        cin >> numbers[i].length;
        numbers[i].num1 = i+1;
    }
    sort(numbers, numbers+n, cmp1);
    for(int i = 0; i<n; i++)
    {
        numbers[i].num2 = i+1;
    }
    sort(numbers, numbers+n, cmp2);
    for(int i = 0; i<n; i++)
    {
        cout << numbers[i].num2 <<" ";
    }


    return 0;
}