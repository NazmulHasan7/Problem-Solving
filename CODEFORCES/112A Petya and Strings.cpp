/*Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those 
two strings lexicographically. The letters' case does not matter, that is an uppercase letter is 
considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
Input -->
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 
inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase
and lowercase Latin letters.
Output -->
If the first string is less than the second one, print "-1". If the second string is less than 
the first one, print "1". If the strings are equal, print "0". Note that the letters' case is 
not taken into consideration when the strings are compared.*/

#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    
    if(str1.length() == str2.length()){
        for(int i=0; i<str1.length(); i++){
            if(i == str1.length()-1 && (char)tolower(str1[i]) == (char)tolower(str2[i]))
                cout << 0;
            else if((char)tolower(str1[i]) < (char)tolower(str2[i])){
                cout << -1; break;
            }
            else if((char)tolower(str1[i]) > (char)tolower(str2[i])){
                cout << 1; break;
            }
        }
    }
    return 0;
}