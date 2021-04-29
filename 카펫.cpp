#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // x*y = yellow
    //brown = 2x+2y+4 -> 가로: x+2, 세로: y+2
    for(int y=1;y<=brown;y++){
        int x;
        if(yellow %(y) == 0 && yellow/(y) >=1)
            x = yellow/(y);
        if((2*(x+y) +4) == brown){
            answer.push_back(x+2);
            answer.push_back(y+2);
            break;
        }
    }
    return answer;
}