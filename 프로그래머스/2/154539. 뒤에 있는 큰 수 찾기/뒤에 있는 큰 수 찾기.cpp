#include <string>
#include <vector>
#include <stack>

std::vector<int> solution(std::vector<int> numbers) {
    std::vector<int> answer(numbers.size());
    std::stack<int> st;
    for (int i = numbers.size() - 1; i >= 0; i--)
    {
        while (1)
        {
            if (st.empty())
            {
                answer[i] = -1;
                break;
            }
            if (st.top() > numbers[i])
            {
                answer[i] = st.top();
                break;
            }
            st.pop();
        }
        st.push(numbers[i]);
    }
    
    return answer;
}