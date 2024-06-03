#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int v[100001];

void heapify(int n, int i)
{
    int largest = i;
    int l = i * 2;
    int r = i * 2 + 1;

    if(l <= n && v[l] > v[largest]) largest = l;
    if(r <= n && v[r] > v[largest]) largest = r;
    if(largest != i)
    {
        swap(v[i], v[largest]);
        heapify(n, largest);
    }
}

void heap_sort()
{
    for(int i = n/2; i>=1; i--)
    {
        heapify(n, i);
    }
    for(int i = n; i>1; i--)
    {
        swap(v[1], v[i]);
        heapify(i-1, 1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }
    heap_sort();
    for(int i = 1; i<=n; i++)
    {
        cout << v[i] <<" ";
    }
    
    return 0;
}