/*Recently, Anton has found a set. The set consists of small English letters. Anton 
carefully wrote out all the letters from the set in one line, separated by a comma. He 
also added an opening curved bracket at the beginning of the line and a closing curved 
bracket at the end of the line.
Unfortunately, from time to time Anton would forget writing some letter and write it again
He asks you to count the total number of distinct letters in his set.
Input -->
The first and the single line contains the set of letters. The length of the line doesn't 
exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends
with a closing curved bracket. Between them, small English letters are listed, separated 
by a comma. Each comma is followed by a space.
Output -->
Print a single number — the number of distinct letters in Anton's set.*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
   string str, tempStr;
   getline(cin, str);
   int count=0;
   
   if(str.length() == 2)
        cout << 0 << endl;
   else{
      for(int i=1; i<str.length(); i+=3){
          int flag = 0;
        for(int j=0; j<count; j++){
            if(str[i] == tempStr[j]){
                flag++;
                break;
            }
        }
        if(flag == 0){
            count++;
            tempStr += str[i];
        }
        if(str[i+1] == '}')
            break;
    }
    cout << count << endl; 
   }
   return 0;
}