#include <string>
#include <vector>
#include <stack>

int solution(std::vector<int> order) {
    int answer = 0;
    std::stack<int> s;

    for (int i = 1; i <= order.size(); i++) 
    {
        s.push(i);

        while (!s.empty() && s.top() == order[answer]) 
        {
            s.pop();
            answer++;
        }
    }

    return answer;
}