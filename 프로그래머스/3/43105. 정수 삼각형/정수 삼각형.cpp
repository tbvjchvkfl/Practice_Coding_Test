#include <string>
#include <vector>

int solution(std::vector<std::vector<int>> triangle) 
{
    int answer = 0;
    int memo[501][501];
    memo[0][0] = triangle[0][0];
    

    for (int i = 1; i <= triangle.size()-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                memo[i][j] = memo[i - 1][j];
            }
            else if (j == i)
            {
                memo[i][j] = memo[i - 1][j - 1];
            }
            else
            {
                memo[i][j] = std::max(memo[i - 1][j], memo[i - 1][j - 1]);
            }
            memo[i][j] += triangle[i][j];
        }
    }

    answer = memo[triangle.size()-1][0];
    for (int i = 1; i < triangle.size(); i++)
    {
        if (memo[triangle.size()-1][i] > answer)
        {
            answer = memo[triangle.size()-1][i];
        }
    }
    return answer;
}