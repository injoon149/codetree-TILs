#include <iostream>
using namespace std;

const int MAX_N = 100001;

struct Node {
    int data;
    Node *prev, *next;
    Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

void insertNext(Node* u, Node* singleton) {
    singleton->prev = u;
    singleton->next = u->next;
    if(nullptr != singleton->prev) singleton->prev->next = singleton;
    if(nullptr != singleton->next) singleton->next->prev = singleton;
}

void insertFront(Node* u, Node* singleton) {
    singleton->next = u;
    singleton->prev = u->prev;
    if(nullptr != singleton->prev) singleton->prev->next = singleton;
    if(nullptr != singleton->next) singleton->next->prev = singleton;
}

void pop(Node* u) {
    if(nullptr != u->prev) u->prev->next = u->next;
    if(nullptr != u->next) u->next->prev = u->prev;
    u->prev = u->next = nullptr;
}

Node *nodes[MAX_N] = {};

int main() {
    // 여기에 코드를 작성해주세요.
    int n,q,num,i,j;
    cin >> n;
    cin >> q;
    for(int k = 1; k<=n; k++)
    {
        nodes[k] = new Node(k);
    }
    for(int k = 0; k<q; k++)
    {
        cin >> num;
        if(num == 1)
        {
            cin >> i;
            Node* SumNode = nodes[i];
            pop(SumNode);
        }
        else if(num == 2)
        {
            cin >> i >> j;
            Node* sumNode = nodes[i];
            Node* sumNode2 = nodes[j];
            insertFront(sumNode, sumNode2);
        }
        else if(num == 3)
        {
            cin >> i >> j;
            Node* sumNode = nodes[i];
            Node* sumNode2 = nodes[j];
            insertNext(sumNode, sumNode2);
        }
        else if(num == 4)
        {
            cin >> i;
            Node* sumNode = nodes[i];
            if(sumNode->prev == nullptr)
            {
                cout << 0 <<" ";
            }
            else cout << sumNode->prev->data <<" ";

            if(sumNode->next == nullptr)
            {
                cout << 0 << endl;
            }
            else cout << sumNode->next->data << endl;
        }

    }
    // 마지막으로 모든 노드의 다음 노드를 출력
    for (int k = 1; k <= n; k++) {
        if (nodes[k]->next == nullptr) {
            cout << 0 << " ";
        } else {
            cout << nodes[k]->next->data << " ";
        }
    }
    cout << endl;
    return 0;
}