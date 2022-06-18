/*Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose 
decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 
are lucky and 5, 17, 467 are not.
Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him 
find out if the given number n is almost lucky.
Input --> The single line contains an integer n (1≤n≤1000) — the number that needs to be checked.
Output --> In the only line print "YES" (without the quotes), if number n is almost lucky. 
Otherwise, print "NO" (without the quotes).*/

#include <iostream> 
#include <string> 
using namespace std;

bool isLucky (string str){
    for(int i=0; i<str.length(); i++)
        if(str[i] != '4' && str[i] != '7')
            return false;
    return true;
}
bool isDivisible(int num){
    int arr[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<14; i++){
        if(num % arr[i] == 0)
            return true;
    }
    return false;
}
int main(){
    string str;
    int num;
    cin >> num;
    str = to_string(num);
    if(isDivisible(num))
        cout << "YES" << endl;
    else if(isLucky(str))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}