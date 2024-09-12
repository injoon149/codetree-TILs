#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node *prev, *next;
    Node(string data) : data(data), prev(nullptr), next(nullptr) {}
};

void InsertNext(Node *u, Node *singleton) {
    singleton->prev = u;
    singleton->next = u->next;
    if(nullptr != singleton->prev)
    {
        singleton->prev->next = singleton;
    }
    if(nullptr != singleton->next)
    {
        singleton->next->prev = singleton;
    }
}

void InsertPrev(Node *u, Node *singleton){
    singleton->next = u;
    singleton->prev = u->prev;

    if(nullptr != singleton->prev)
    {
        singleton->prev->next = singleton;
    }
    if(nullptr != singleton->next)
    {
        singleton->next->prev = singleton;
    }
}

void Pop(Node *u)
{
    if(nullptr != u->prev)
    {
        u->prev->next = u->next;
    }
    if(nullptr != u->next)
    {
        u->next->prev = u->prev;
    }
    u->prev = nullptr;
    u->next = nullptr;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s_init;
    cin >> s_init;
    Node *node = new Node(s_init);
    int n;
    cin >> n;
    int num;
    string s;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        if(num == 1)
        {
            cin >> s;
            Node *new_node = new Node(s);
            InsertPrev(node, new_node);
            if(node->prev == nullptr)
            {
                cout <<"(Null)" <<" ";
            }
            else cout << (node->prev)->data<<" ";

            cout << node->data <<" ";

            if(node->next == nullptr)
            {
                cout <<"(Null)" <<endl;
            }
            else cout << (node->next)->data <<endl;
        }
        else if(num == 2)
        {
            cin >> s;
            Node *new_node = new Node(s);
            InsertNext(node, new_node);
            if(node->prev == nullptr)
            {
                cout <<"(Null)" <<" ";
            }
            else cout << (node->prev)->data<<" ";

            cout << node->data <<" ";

            if(node->next == nullptr)
            {
                cout <<"(Null)" <<endl;
            }
            else cout << (node->next)->data <<endl;
        }
        else if(num == 3)
        {
            if(node->prev != nullptr)
            {
                Pop(node->prev);
            }
            if(node->prev == nullptr)
            {
                cout <<"(Null)" <<" ";
            }
            else cout << (node->prev)->data<<" ";

            cout << node->data <<" ";

            if(node->next == nullptr)
            {
                cout <<"(Null)" <<endl;
            }
            else cout << (node->next)->data <<endl; 
        }
        else if(num == 4)
        {
            if(node->next != nullptr)
            {
                Pop(node->next);
            }
            if(node->prev == nullptr)
            {
                cout <<"(Null)" <<" ";
            }
            else cout << (node->prev)->data<<" ";

            cout << node->data <<" ";

            if(node->next == nullptr)
            {
                cout <<"(Null)" <<endl;
            }
            else cout << (node->next)->data <<endl;

        }
    }
    return 0;
}