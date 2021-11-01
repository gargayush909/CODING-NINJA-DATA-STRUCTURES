/*


Remove X
Send Feedback
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:


*/


#include <iostream>
using namespace std;





#include <bits/stdc++.h>

void removeX(char input[])
{
    int len= strlen(input);
    
	if(input[0] == '\0')
        return;
    if(input[0]=='x')
    {	
            for(int j = 1; j <= len; j++) {
                input[j - 1] = input[j];
            }
        
        removeX(input);

    }  
    else
        removeX(input + 1);
}
 






 

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
