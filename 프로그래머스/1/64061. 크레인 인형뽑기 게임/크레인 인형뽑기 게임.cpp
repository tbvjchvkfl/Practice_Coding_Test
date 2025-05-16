#include <string>
#include <vector>
#include <stack>

int solution(std::vector<std::vector<int>> board, std::vector<int> moves) 
{
	int answer = 0;

	std::stack<int> basket;
	std::vector<std::vector<int>> vtemp(31, std::vector<int>(31, 0));

	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			vtemp[i][j] = board[j][i];
		}
	}

	for (auto &e : moves)
	{
		for (int i = 0; i < vtemp[e - 1].size(); i++)
		{
			if (vtemp[e - 1][i] != 0)
			{
				int& doll{ vtemp[e - 1][i] };

				if (basket.empty() || doll != basket.top())
				{
					basket.push(doll);
				}
				else if(!basket.empty() && doll == basket.top())
				{
					basket.pop();
					answer += 2;
				}
				vtemp[e - 1][i] = 0;
				break;
			}
		}
	}

	return answer;
}