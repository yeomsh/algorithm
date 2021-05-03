#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int cnt=0;

bool primeNumber(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i == 0) return false;
    }
    return true;
}

void findPrimeNum(vector<int> &nums, int l, int index, int sum){
    if(l==3){
        if(primeNumber(sum))cnt++;
        return;
    }
    for(int i=index;i<nums.size();i++){
        findPrimeNum(nums, l+1,i+1,sum+nums[i]);
    }
    
}
int solution(vector<int> nums) {
    
    findPrimeNum(nums,0,0,0);
    return cnt;
}
