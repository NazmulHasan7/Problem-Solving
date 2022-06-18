/*Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of 
tram's movement. At the i-th stop ai passengers exit the tram, while bi passengers enter it. The 
tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, 
all passengers exit so that it becomes empty.
Your task is to calculate the tram's minimum capacity such that the number of people inside the 
tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit 
before any entering passenger enters the tram.
Input -->
The first line contains a single number n (2≤n≤1000) — the number of the tram's stops.
Then n lines follow, each contains two integers ai and bi (0≤ai,bi≤1000)— the number of passengers
that exits the tram at the i-th stop, and the number of passengers that enter the tram at the i-th 
stop. The stops are given from the first to the last stop in the order of tram's movement.
Output -->
Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).*/

#include <iostream> 
using namespace std;

int main()
{
    int n,max = 0, psngr = 0;
    cin >> n;
    int arr[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
        psngr -= arr[i][0];
        psngr += arr[i][1];
        if(psngr > max)
            max = psngr;
    }
    cout << max << endl;
    return 0;
}