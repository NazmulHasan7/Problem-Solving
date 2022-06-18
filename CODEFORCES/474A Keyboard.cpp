/*Our good friend Mole is trying to code a big message. He is typing on an unusual keyboard
with characters arranged in following way:
qwertyuiop
asdfghjkl;
zxcvbnm,./
Unfortunately Mole is blind, so sometimes it is problem for him to put his hands accurately.
He accidentally moved both his hands with one position to the left or to the right. That 
means that now he presses not a button he wants, but one neighboring button (left or right, 
as specified in input).
We have a sequence of characters he has typed and we want to find the original message.
Input --->
First line of the input contains one letter describing direction of shifting ('L' or 'R' 
respectively for left or right).
Second line contains a sequence of characters written by Mole. The size of this sequence 
will be no more than 100. Sequence contains only symbols that appear on Mole's keyboard. 
It doesn't contain spaces as there is no space on Mole's keyboard.
It is guaranteed that even though Mole hands are moved, he is still pressing buttons on 
keyboard and not hitting outside it.
Output --->
Print a line that contains the original message.*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string inpStr, s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";
    char c;
    cin >> c;
    cin.ignore();
    cin >> inpStr;
    
    for(int i=0; i<inpStr.length(); i++){
        int indx = -1;
        if(c == 'R'){
            for(int j=0; j<s1.length(); j++){
                if(inpStr[i] == s1[j]){
                    indx = j;
                    if(indx == 0)
                        break;
                    else
                        cout << s1[j-1];
                }
            }
            for(int j=0; j<s2.length(); j++){
                if(inpStr[i] == s2[j]){
                    indx = j;
                    if(indx == 0)
                        break;
                    else
                        cout << s2[j-1];
                }
            }
            for(int j=0; j<s3.length(); j++){
                if(inpStr[i] == s3[j]){
                    indx = j;
                    if(indx == 0)
                        break;
                    else
                        cout << s3[j-1];
                }
            }
        }
        else if(c == 'L'){
            for(int k=0; k<s1.length(); k++){
                if(inpStr[i] == s1[k]){
                    indx = k;
                    if(indx == s1.length()-1)
                        break;
                    else
                        cout << s1[k+1];
                }
            }
            for(int k=0; k<s2.length(); k++){
                if(inpStr[i] == s2[k]){
                    indx = k;
                    if(indx == s2.length()-1)
                        break;
                    else
                        cout << s2[k+1];
                }
            }
            for(int k=0; k<s3.length(); k++){
                if(inpStr[i] == s3[k]){
                    indx = k;
                    if(indx == s3.length()-1)
                        break;
                    else
                        cout << s3[k+1];
                }
            }
        }
    }
    return 0;
}