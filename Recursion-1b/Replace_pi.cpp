/*
Replace pi (recursive)
Send Feedback
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50
*/




#include <iostream>
using namespace std;






#include<cstring>
void pairStar(char input[]) {
    // Write your code here
	int n=strlen(input);
    if(n==0 || n==1) 
        return;
    if(input[0]==input[1])
    {
        for(int i=n;i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[1]='*';
    }
    pairStar(input+1);
}







int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
