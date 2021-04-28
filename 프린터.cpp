#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int index = 0;
    
    queue<pair<int,int>> q;
    priority_queue<int> pq;
    
    for(const auto &p : priorities){
        q.push({p,index++});
        pq.push(p);
    }
    
    int order = 1;
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        
        if(pq.top()<=cur.first){
            if(cur.second == location){
                return order;
            }
            q.pop();
            pq.pop();
            order++;
        }
        else{
            q.push(cur);
            q.pop();
        }
        
    }
    
    return answer;
}