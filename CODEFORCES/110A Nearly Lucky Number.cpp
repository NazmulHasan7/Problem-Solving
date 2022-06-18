/*Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose 
decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 
are lucky and 5, 17, 467 are not.
Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky
digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
Input -->
The only line contains an integer n (1 ≤ n ≤ 1018).
Output -->
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" .*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int digits = 0;
    long long n;
    cin >> n;
    string str = to_string(n);
    for(int i=0; i<str.length(); i++)
        if(str[i] == '4' || str[i] == '7')
            digits++;
    if(digits == 4 || digits == 7)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
