/*When preparing a tournament, Codeforces coordinators try treir best to make the first problem 
as easy as possible. This time the coordinator had chosen some problem and asked  people about 
their opinions. Each person answered whether this problem is easy or hard.
If at least one of these  people has answered that the problem is hard, the coordinator decides 
to change the problem. For the given responses, check if the problem is easy enough.
Input -->
The first line contains a single integer  () — the number of people who were asked to give their 
opinions. The second line contains  integers, each integer is either  or . If -th integer is , 
then -th person thinks that the problem is easy; if it is , then -th person thinks that the problem
is hard.
Output -->
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at
least one person who thinks the problem is hard.
You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.*/

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x == 1) {
            cout << "HARD" << endl;
            break;
        }
        else if(i+1 == n)
            cout << "EASY" << endl;
    }
    return 0;
}
