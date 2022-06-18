//Array approach : Time limit crossed in test 8

#include <iostream>
using namespace std;

int main()
{
    long long n,pos; even, odd=1;
    cin >> n >> pos;
    int arr[n];
    
    if(n % 2 == 0)
        even = n/2;
    else
        even = n/2 + 2;
        
    for(int i=1; i<=n; i++)
        if(i % 2 == 0)
            arr[even++] = i;
        else 
            arr[odd++] = i;
            
    cout << arr[pos] << endl;
    return 0;
}
