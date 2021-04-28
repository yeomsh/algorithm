#남은 작업량/속도를 왜 저렇게 계산해야만 통과되는지 생각해보기
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    int max = -1;
    for(int i=0;i<progresses.size();i++){
        int d= (100-progresses[i])/speeds[i];
        if(progresses[i]+d*speeds[i]!= 100) d++;
        q.push(d);
    }
    
    while(!q.empty()){
        if(q.front()<=max) {
            q.pop();
            answer[answer.size()-1]++;
        }
        else{
            max = q.front();
            q.pop();
            answer.push_back(1);
        }
        
    }
    return answer;
}