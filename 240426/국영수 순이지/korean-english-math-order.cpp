#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    tuple<int,int,int, string> students[n];
    string name;
    int korean, english, math;
    for(int i = 0; i<n; i++)
    {
        cin >> name >> korean >> english >> math;
        students[i] = make_tuple(-1*korean, -1*english, -1*math, name);
    }
    sort(students, students+n);
    for(int i = 0; i<n; i++)
    {
        int kor, eng, ma;
        string n;
        tie(kor,eng,ma,n) = students[i];
        cout << n <<" " << -kor<<" "<<-eng<<" "<<-ma<<endl; 
    }


    return 0;
}