#include <iostream>
using namespace std;

#define MAX_N 1000000

int n;
int customers[MAX_N];
int leader_capacity, member_capacity;

int RequiredMember(int customer_num)
{
    if(customer_num <= 0) return 0;
    else
    {
        if(customer_num % member_capacity == 0) 
        {
            return customer_num / member_capacity;
        }
        else
        {
            return (customer_num / member_capacity) + 1;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> customers[i];
    }
    cin >> leader_capacity >> member_capacity;

    long long ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans++;
        ans += (RequiredMember(customers[i] - leader_capacity));
    }
    cout << ans;
    return 0;


}
