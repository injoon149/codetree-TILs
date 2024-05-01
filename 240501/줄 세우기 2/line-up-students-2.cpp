#include <iostream>
#include <algorithm>
using namespace std;

class Student 
{
    public:
    int key, weight, number;
    Student(int key=0, int weight=0, int number=0)
    {
        this->key=key;
        this->weight=weight;
        this->number=number;
    }
};

bool cmp(Student a, Student b)
{
    if(a.key == b.key) return a.weight > b.weight;
    else return a.key < b.key;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Student students[n];
    for(int i = 0; i<n; i++)
    {
        cin >> students[i].key >> students[i].weight;
        students[i].number = i+1;
    }
    sort(students, students+n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout << students[i].key<<" "<<students[i].weight<<" "<<students[i].number<<endl;
    }
    return 0;
}