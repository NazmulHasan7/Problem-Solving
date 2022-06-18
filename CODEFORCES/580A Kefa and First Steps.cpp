/*Kefa decided to make some money doing business on the Internet for exactly n days. He knows 
that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to 
know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that 
the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called 
non-decreasing if all numbers in it follow in the non-decreasing order.
Input -->
The first line contains integer n (1 ≤ n ≤ 105).
The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).
Output -->
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.*/

#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}
int main()
{
    int n, k = 0, count = 0;
    cin >> n;
    int arr[n], ls[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    for(int i=0; i<n; i++){
        if(i+1 < n && arr[i] > arr[i+1]){
            ls[k] = ++count;
            count = 0;
            k++;
        }
        else{
            if(i+1 == n && arr[i] >= arr[i-1])
                ls[k++] = ++count;
            else {
                count++;
                if(i+1 == n)
                    ls[k++] = count;
                //cout << arr[i] << " " << count << endl;
            }
        }
    }
    cout << findMax(ls, k) << endl;
    return 0;
}
