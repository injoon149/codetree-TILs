#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student 
{
    public:
        string name;
        int key, weight;

        Student(string name = "", int key=0, int weight = 0)
        {
            this->name = name;
            this->key = key;
            this->weight = weight;
        }
};

bool cmp(Student a, Student b)
{
    if(a.key < b.key) return true;
    else if(a.key == b.key)
    {
        return a.weight > b.weight;
    }
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Student students[n];
    for(int i = 0; i<n; i++)
    {
        cin >> students[i].name >> students[i].key >> students[i].weight;
    }
    sort(students, students+n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout << students[i].name<<" "<<students[i].key<<" "<<students[i].weight<<endl;
    }

    return 0;
}