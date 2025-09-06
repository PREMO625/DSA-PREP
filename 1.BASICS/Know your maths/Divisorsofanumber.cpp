/*
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



A number which completely divides another number is called it's divisor.


Examples:
Input: n = 6

Output = [1, 2, 3, 6]

Explanation: The divisors of 6 are 1, 2, 3, 6.

Input: n = 8

Output: [1, 2, 4, 8]

Explanation: The divisors of 8 are 1, 2, 4, 8.

Constraints:
1 <= n <= 1000
My approachO(n):


#include<iostream>
#include<vector>
using namespace std;

void Divisors(int num)
{
    vector<int> div;
    int n=0;
    while(n!=num)
    {
        n++;
        if(num%n==0)
        {
            div.emplace_back(n);
        }
        
    }
    cout<<"\n[";
    for(int i=0;i<div.size();i++)
    {
        cout<<div[i]<<",";
    
    }
    cout<<"]";
}
int main()
{
    int num;
    cin>>num;
    Divisors(num);
    return 0;
}
    */
//The most optimzied approach O(sqrt(n)):
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Divisors(int num)
{
    vector<int> div;
    for(int i = 1; i * i <= num; ++i)
    {
        if(num % i == 0)
        {
            div.emplace_back(i);
            if(i != num / i)
                div.emplace_back(num / i);
        }
    }
    sort(div.begin(), div.end());
    cout << "\n[";
    for(size_t i = 0; i < div.size(); ++i)
    {
        cout << div[i];
        if(i != div.size() - 1) cout << ",";
    }
    cout << "]";
}
int main()
{
    int num;
    cin >> num;
    Divisors(num);
    return 0;
}