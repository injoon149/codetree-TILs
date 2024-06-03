#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

void swap(int a, int b)
{
    int tmp = b;
    b = a;
    a = tmp;
}

void insertion_sort()
{
    for(int i = 1; i<v.size(); i++)
    {
        int j = i-1;
        int key = v[i];
        while(j >=0 && v[j] > key)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    insertion_sort();
    for(int i = 0; i<n; i++)
    {
        cout << v[i] <<" ";
    }

    return 0;
}