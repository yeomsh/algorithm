#include <string>
#include <vector>
#include <set>

using namespace std;

int Rank(int num){
    if(num ==1 | num == 0) return 6;
    else return 7-num;
}


vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    set<int> win_num;
    for(int i: win_nums) win_num.insert(i);
    
    int unknown = 0;
    int same = 0;
    
    for(int i=0;i<6;i++){
        if(lottos[i] == 0){
            unknown ++;
        }
        else if(win_num.find(lottos[i])!= win_num.end()) same++;
    }
    
    answer.push_back(Rank(same+unknown));
    answer.push_back(Rank(same));
    return answer;
}
