/*Being a nonconformist, Volodya is displeased with the current state of things, particularly 
with the order of natural numbers (natural number is positive integer number). He is determined 
to rearrange them. But there are too many natural numbers, so Volodya decided to start with the 
first n. He writes down the following sequence of numbers: firstly all odd integers from 1 to n 
(in ascending order), then all even integers from 1 to n (also in ascending order). Help our hero
to find out which number will stand at the position number k.
Input -->
The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 1012).
Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to
use the cin, cout streams or the %I64d specifier.
Output -->
Print the number that will stand at the position number k after Volodya's manipulations.*/

#include <iostream>
using namespace std;

int main()
{
    long long n,pos, partition;
    cin >> n >> pos;
    if(n % 2 == 0)
        partition = n / 2 + 1;
    else
        partition = n / 2 + 2;
    if(pos < partition)
        cout << pos * 2 - 1 << endl;
    else
        cout << (pos - partition + 1) * 2 << endl; 
    return 0;
}
