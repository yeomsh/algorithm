#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> num;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=0;i<s.length();i++){
        if(s[i]<'0' || s[i] >'9'){
            for(int j=0;j<10;j++){
                string tmp = s.substr(i,arr[j].length());
                if(tmp==arr[j]){
                    i+=(arr[j].length()-1);
                    num.push_back(j);
                    break;
                }
            }
        }
        else num.push_back((s[i])-48);
    }
    
    for(int i=0;i<num.size();i++){
        answer+= num[i] * pow(10,(num.size()-i-1));        
    }
    
    return answer;
}