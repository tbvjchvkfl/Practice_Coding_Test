#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<int> A, std::vector<int> B) 
{
    int answer = 0;
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    
    int count{};

    for (int i = 0; i < B.size(); i++)
    {
        if (A[count] < B[i])
        {
            answer++;
            count++;
        }
    }

    return answer;
}