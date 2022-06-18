/*Mike starts by laying one magnet horizontally on the table. During each following step Mike 
adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the 
magnet on the table, it is either attracted to the previous one (forming a group of multiple 
magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the 
right from the previous one). We assume that a sole magnet not linked to others forms a group 
of its own.
Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.
Input -->
The first line of the input contains an integer n (1≤n≤100000) — the number of magnets. Thenn 
lines follow. The i-th line (1≤i≤n) contains either characters "01", if Mike put the i-th magnet 
in the "plus-minus" position, or characters "10", if Mike put the magnet in the "minus-plus" position.
Output -->
On the single line of the output print the number of groups of magnets.*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n-1; i++){
        if(arr[i] == arr[i+1])
            continue;
        else 
            count++;
    }    
    cout << count << endl;
    return 0;
}
