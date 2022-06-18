/*Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one 
of the given n numbers differs from the others. Bob observed that one number usually differs from 
the others in evenness. Help Bob — to check his answers, he needs a program that among the given 
n numbers finds one that is different in evenness.
Input -->
The first line contains integer n (3≤n≤100) — amount of numbers in the task. The second line 
contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one
of these numbers differs from the others in evenness.
Output -->
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in 
the input order.*/

#include<iostream>
using namespace std;

int main()
{
    int n, x, even=0, odd=0, e1=0, o1=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(x % 2 == 0){
            even++;
            if(e1 == 0)
                e1 = i;
        }
        else{
            odd++;
            if(o1 == 0)
                o1 = i;
        }
    }
    if(odd == 1)
        cout << o1 << endl;
    else
        cout << e1 << endl;
    return 0;
}