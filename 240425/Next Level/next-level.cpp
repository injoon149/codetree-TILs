#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        string id;
        int level;
        Shape(string id, int level)
        {
            this->id = id;
            this->level = level;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int level;
    cin >> s >> level;
    Shape shape = Shape(s, level);
    Shape shape2 = Shape("codetree", 10);
    cout << "user " << shape2.id<<" lv " << shape2.level << endl;
    cout << "user " << shape.id << " lv " << shape.level;
    return 0;
}