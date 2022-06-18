/*For a positive integer n let's define a function f:
f(n)=-1+2-3+..+((-1)^n)*n
Your task is to calculate f(n) for a given integer n.
Input -->
The single line contains the positive integer n (1 ≤ n ≤ 1015).
Output -->
Print f(n) in a single line.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, sum = 0, even = 0, odd = 0;
    cin >> n;
    if(n % 2 == 0)
        even = odd = n/2;
    else{
        odd = n/2 + 1;
        even = n/2;
    }
    cout << even * (even + 1) - (odd * odd) << endl;
    return 0;
}
