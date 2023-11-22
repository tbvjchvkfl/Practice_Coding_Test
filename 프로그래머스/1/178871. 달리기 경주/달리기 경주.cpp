#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> temp1;
    map<string , int> temp2;
    
    for(int i = 0; i<players.size(); i++)
    {
        temp1[i] = players[i];
        temp2[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        int f = temp2[callings[i]];
        string a = temp1[f -1];
        temp1[f-1] = callings[i];
        temp1[f] = a;
        temp2[callings[i]] = f-1;
        temp2[a] = f;
    }
    for(auto e : temp1)
    {
        answer.push_back(e.second);
    }
    return answer;
}