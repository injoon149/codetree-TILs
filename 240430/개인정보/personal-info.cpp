#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
    string name;
    int key;
    double weight;
    Student(string name=" ", int key=0, double weight=0.0)
    {
        this->name = name;
        this->key = key;
        this->weight = weight;
    }
};

bool cmpname(Student a, Student b)
{
    return a.name < b.name;
}

bool cmpkey(Student a, Student b)
{
    return a.key > b.key;
}

void printClass(Student a[5])
{
    for(int i = 0; i<5; i++)
    {
        cout << a[i].name<<" "<<a[i].key<<" "<<a[i].weight<<endl;
    }
}



int main() {
    // 여기에 코드를 작성해주세요.
    Student students[5];
    for(int i = 0; i<5; i++)
    {
        cin >> students[i].name >> students[i].key >> students[i].weight;
    }
    sort(students, students+5, cmpname);
    cout << "name"<<endl;
    printClass(students);
    cout << endl;
    sort(students, students+5, cmpkey);
    cout << "height"<<endl;
    printClass(students);
    


    return 0;
}