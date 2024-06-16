#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    map <string,int> items;
    for(int i=0;i<want.size();i++)
    {
        items[want[i]] = number[i];
    }
    for(int i=0;i<discount.size()-9;i++)
    {
        bool able = true;
        map <string,int> tmp(items);
        for(int j=i;j<i+10;j++)
        {
            tmp[discount[j]]--;
        }
        for(auto c : tmp)
        {
            if (c.second)
            {
                able = false;
                break;
            }
        }
        if (able)
        {
            answer++;
        }
    }
    return answer;
}