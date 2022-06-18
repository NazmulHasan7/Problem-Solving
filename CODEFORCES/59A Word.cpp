/*At that as little as possible letters should be changed in the word. For example, the word HoUse
must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of 
uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, 
maTRIx should be replaced by matrix. Your task is to use the given method on one given word.
Input -->
The first line contains a word s — it consists of uppercase and lowercase Latin letters and 
possesses the length from 1 to 100.
Output -->
Print the corrected word s. If the given word s has strictly more uppercase letters, make the 
word written in the uppercase register, otherwise - in the lowercase one.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int u=0,l=0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            u++;
        else
            l++;
    }
    if(u <= l)
        for(int i=0; i<str.length(); i++)
            str[i] = tolower(str[i]);
    else
        for(int i=0; i<str.length(); i++)
            str[i] = toupper(str[i]);
    cout << str << endl;
    return 0;
}
