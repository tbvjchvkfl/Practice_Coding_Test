#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(int x, int y)
{
    return x > y;
}

int solution(int k, int m, std::vector<int> score) {
    int answer = 0;
    int box{};
    int focus{};
    box = score.size() / m;
    sort(score.begin(), score.end(), compare);
    std::map<int, std::vector<int>> apple;


    for (int i = 0; i < box; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            if (focus >= m)
            {
                temp.push_back(score[focus]);
            }
            else if (focus < m)
            {
                temp.push_back(score[j]);
            }
            focus++;
        }
        apple[i] = temp;
    }
    for (int i = 0; i < apple.size(); i++)
    {
        answer += apple[i].back() * m;
    }
  
    return answer;
}