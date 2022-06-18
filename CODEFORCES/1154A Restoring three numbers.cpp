/*Polycarp has guessed three positive integers a, b and c. He keeps these numbers in 
secret, but he writes down four numbers on a board in arbitrary order — their pairwise 
sums (three numbers) and sum of all three numbers (one number). So, there are four numbers
on a board in random order: a+b, a+c, b+c and a+b+c.
You have to guess three numbers a, b and c using given numbers. Print three guessed 
integers in any order.
Pay attention that some given numbers a, b and c can be equal (it is also possible that 
a=b=c).
Input --->
The only line of the input contains four positive integers x1,x2,x3,x4 (2≤xi≤109) — numbers
written on a board in random order. It is guaranteed that the answer exists for the given 
number x1,x2,x3,x4.
Output --->
Print such positive integers a, b and c that four numbers written on a board are values 
a+b, a+c, b+c and a+b+c written in some order. Print a, b and c in any order. If there are
several answers, you can print any. It is guaranteed that the answer exists.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,c, arr[4], max;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr,arr+4);
    max = arr[3];
    a = max - arr[0];
    b = arr[1] - a;
    c = arr[2] - a;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
