#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(auto e : arr)
    {
        answer.append(e);
    }
    return answer;
}