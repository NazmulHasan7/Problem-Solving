/*Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants 
to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar
bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after 
withdrawing his entire balance?
Input -->
The first and only line of input contains a single integer n (1≤n≤109).
Output -->
Output the minimum number of bills that Allen could receive.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c=0;
    cin >> n;
    
    while(n > 0){
        if(n >= 100){
            c += n / 100;
            n %= 100;
        }
        else if(n >= 20){
            c += n / 20;
            n %= 20;
        }
        else if(n >= 10){
            c += n / 10;
            n %= 10;
        }
        else if(n >= 5){
            c += n / 5;
            n %= 5;
        }
        else{ 
            c += n;
            n = 0;
        }
    }
    cout << c << endl;
    return 0;
}