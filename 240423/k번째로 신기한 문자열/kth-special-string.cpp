#include <iostream>
#include <string>
#include <set>
using namespace std;

bool hasWord(string a, string b)
{
    for(int i = 0; i<b.size(); i++)
    {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string t, word;
    cin >> n >> k >> t;
    set<string> s;
    for(int i = 0; i<n; i++)
    {
        cin >> word;
        if(hasWord(word, t) == true) {
            s.insert(word);
        }
    }
    auto iter = s.begin();
    for(int i = 0; i<k-1; i++)
    {
        iter++;
    }
    cout << *iter;
    

    return 0;
}