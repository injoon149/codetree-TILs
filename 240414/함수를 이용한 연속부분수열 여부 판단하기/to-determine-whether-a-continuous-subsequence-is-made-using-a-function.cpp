#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> v1, vector<int> v2)
{
    int num2 = v2[0];
    int flag = 1;
    for(int i = 0; i<v1.size(); i++)
    {
        if(num2 == v1[i])
        {
            for(int j = 1; j<v2.size(); j++)
            {
                if(i+j < v1.size())
                {
                    if(v2[j] == v1[i+j])
                    {
                        flag = 0;
                    }
                    else flag = 1;
                }
            }
        }
    }
    return flag;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1(n1, 0);
    vector<int> v2(n2, 0);
    for(int i = 0; i<n1; i++)
    {
        cin >> v1[i];
    }
    for(int i = 0; i<n2; i++)
    {
        cin >> v2[i];
    }
    if(solution(v1, v2) == 0) cout << "Yes";
    else cout << "No";
    
    return 0;
}