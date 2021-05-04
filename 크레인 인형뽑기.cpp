#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack <int> arr;
    
    for(int i=0;i<moves.size();i++){
        int move = moves[i]-1;
        
        for(int j=0;j<board.size();j++){
            if(board[j][move] != 0){
                if(!arr.empty() && arr.top() == board[j][move]){
                    arr.pop();
                    answer+=2;
                }
                else arr.push(board[j][move]);
                board[j][move] = 0;
                break;
            }
        }
    }
    return answer;
}
