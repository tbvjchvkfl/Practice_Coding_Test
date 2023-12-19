#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int multiply = 2 * a * b;
    std::string s1 = std::to_string(a);
    std::string s2 = std::to_string(b);
    s1.append(s2);
    answer = stoi(s1);
    if(answer < multiply)
    {
        return multiply;
    }
    
    return answer;
}