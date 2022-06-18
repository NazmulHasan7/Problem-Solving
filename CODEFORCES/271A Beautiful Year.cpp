/*It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 
2013 is the first year after the old 1987 with only distinct digits.
Now you are suggested to solve the following problem: given a year number, find the minimum year 
number which is strictly larger than the given one and has only distinct digits.
Input -->
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
Output -->
Print a single integer — the minimum year number that is strictly larger than y and all it's 
digits are distinct. It is guaranteed that the answer exists*/

#include <iostream>
using namespace std;

bool isDistict(int y){
    int arr[4], i = 0;
    while(y != 0){
        arr[i] = y % 10;
        i++;
        y /= 10;
    }
    for(int i=0; i<4; i++)
        for(int j=i+1; j<4; j++)
            if(arr[i] == arr[j])
                return false;
    return true;
}
int main(){
    int y;
    cin >> y;
    while(!isDistict(y+1))
        y++;
    cout << ++y << endl;
    return 0;
}
