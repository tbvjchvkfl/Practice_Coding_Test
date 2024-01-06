#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    std::stack<int>s;
    int temp = 0;

    for (auto e : num_list)
    {
        s.push(e);
    }
    while (!s.empty())
    {
        answer.push_back(s.top());
        s.pop();
    }
    return answer;
}