/*As you woke up, you found Mom's coins and read her note. "But why split the money equally?" 
- you thought. After all, your twin is sleeping and he won't know anything. So you decided to act
like that: pick for yourself some subset of coins so that the sum of values of your coins is strictly
larger than the sum of values of the remaining coins that your twin will have. However, you correctly
thought that if you take too many coins, the twin will suspect the deception. So, you've decided
to stick to the following strategy to avoid suspicions: you take the minimum number of coins, 
whose sum of values is strictly more than the sum of values of the remaining coins. On this basis,
determine what minimum number of coins you need to take to divide them in the described manner.
Input -->
The first line contains integer n (1 ≤ n ≤ 100) — the number of coins. The second line contains 
a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the coins' values. All numbers are 
separated with spaces.
Output -->
In the single line print the single number — the minimum needed number of coins.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,count = 0,sumX = 0, sumY = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    
    for(int i=n-1; i>=0; i--){
        count++;
        sumX += arr[i];
        sumY = 0;
        for(int j=i-1; j>=0; j--){
            sumY += arr[j];
        }
        if(sumX > sumY)
            break;
    }
    cout << count << endl;
    return 0;
}
