/*
String to Integer
Send Feedback
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/



#include <iostream>
using namespace std;




#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    int len=strlen(input);
    if(len == 1)
    {
        return input[0]-'0';
    }
    int small=stringToNumber(input+1);
    int current=input[0]-'0';
    int factor=pow(10,len-1);
    int value=factor*current+small;
	return value;
}









int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
