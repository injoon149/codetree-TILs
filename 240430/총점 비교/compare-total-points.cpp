#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
    string name;
    int kor, eng, math;

    Student(string name = "", int kor=0, int eng=0, int math=0)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
};

bool cmp(Student a, Student b)
{
    return a.kor+a.eng+a.math < b.kor+b.eng+b.math;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name, score;
    Student students[n];
    for(int i = 0; i<n; i++)
    {
        cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;
    }
    sort(students, students+n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout << students[i].name <<" "<< students[i].kor <<" "<< students[i].eng <<" "<< students[i].math << endl;
    }
    return 0;
}