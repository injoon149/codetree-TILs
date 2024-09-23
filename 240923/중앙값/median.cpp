#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//중앙값을 관리할 두 개의 힙
priority_queue<int> maxHeap; //중앙값보다 작은 값 저장
priority_queue<int, vector<int>, greater<int>> minHeap; //중앙값보다 큰 값 저장
//중앙값을 추가하는 함수
void addNumber(int num){
    if(maxHeap.empty() || num <= maxHeap.top())
    {
        maxHeap.push(num);
    } else
    {
        minHeap.push(num);
    }

    //힙의 크기 조정해서 최대 힙이 항상 더 많거나 같게 유지
    if(maxHeap.size() > minHeap.size() + 1)
    {
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }
    else if(minHeap.size() > maxHeap.size())
    {
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
}

//중앙값 반환 함수
int getMedian()
{
    return maxHeap.top();
}

int main()
{
    int t,m;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        cin >> m;
        maxHeap = priority_queue<int>(); // 힙 초기화
        minHeap = priority_queue<int, vector<int>, greater<int>>(); // 힙 초기화

        vector<int> sequence(m, 0);
        for(int i = 0; i<m; i++)
        {
            cin >> sequence[i];
        }

        vector<int> medians;

        for(int i = 0; i<m; i++)
        {
            addNumber(sequence[i]);
            if(i % 2 ==0) {
                medians.push_back(getMedian());
            }
        }
        for(int i = 0; i<medians.size(); i++)
        {
            cout << medians[i] <<" ";
        }
        cout << endl;
    }
}