#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 특정 값 이상의 첫 번째 위치를 찾는 함수 (lower_bound와 유사)
int lower_bound(const vector<long long>& v, long long target) {
    int left = 0;
    int right = v.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (v[mid] >= target)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

// 특정 값보다 큰 마지막 위치를 찾는 함수 (upper_bound와 유사)
int upper_bound(const vector<long long>& v, long long target) {
    int left = 0;
    int right = v.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (v[mid] > target)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<long long> dot(n);
    for (int i = 0; i < n; i++) {
        cin >> dot[i];
    }
    
    // 점들을 정렬하여 이진 탐색을 사용할 준비를 합니다.
    sort(dot.begin(), dot.end());
    
    for (int i = 0; i < m; i++) {
        long long start, end;
        cin >> start >> end;
        
        // start 이상인 첫 번째 점의 위치
        int start_idx = lower_bound(dot, start);
        // end 이하인 마지막 점의 위치
        int end_idx = upper_bound(dot, end) - 1;
        
        // 선분 안에 포함된 점들의 개수를 계산
        int cnt = max(0, end_idx - start_idx + 1);
        cout << cnt << endl;
    }
    
    return 0;
}