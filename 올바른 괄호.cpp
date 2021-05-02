#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    int open = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(') open++;
        else if(s[i] == ')' && open <= 0) return false;
        else open--;
    }
    if(open!= 0) return false;
    else return true;
}
