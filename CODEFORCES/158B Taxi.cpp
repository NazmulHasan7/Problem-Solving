/*After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to 
celebrate his birthday. We know that the i-th group consists of si friends (1≤si≤4), and they want
to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four 
passengers. What minimum number of cars will the children need if all members of each group should 
ride in the same taxi (but one taxi can take more than one group)?
Input -->
The first line contains integer n (1≤n≤105) — the number of groups of schoolchildren. The second 
line contains a sequence of integers s1,s2,...,sn (1≤si≤4). The integers are separated by a space, 
si is the number of children in the i-th group.
Output -->
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long arr[n], cars=0, one=0, two=0, three=0;
    
    for(long i=0; i<n; i++){
        cin >> arr[i];
        //four
        if(arr[i] == 4)
            cars++;
        else if(arr[i] == 3)
            three++;
        else if(arr[i] == 2)
            two++;
        else
            one++;
    }
    //three
    while(three!=0 && one!=0){
        three--;
        one--;
        cars++;
    }
    if(three > 0)
        cars += three;
    //two    
    if(two % 2 == 0)
        cars += two/2;
    else{
        cars += two/2;
        if(one >= 2)
            one -= 2;
        else if(one == 1)
            one--;
        cars++;
    }
    //one
    if(one != 0){
        cars += one/4;
        if(one % 4 != 0)
            cars++;
    }
    cout << cars << endl;
    return 0;
}
