#include <string>
#include <vector>

bool DFS(std::vector<std::vector<int>> &Computers, int n)
{
    if (!Computers[n][n])
    {
        return false;
    }
    Computers[n][n] = 0;
    for (int i = 0; i < Computers.size(); i++)
    {
        if (Computers[n][i])
        {
            DFS(Computers, i);
        }
    }
    return true;
}


int solution(int n, std::vector<std::vector<int>> computers) 
{
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (computers[i][i] && DFS(computers, i))
        {
            answer++;
        }
    }
    return answer;
}