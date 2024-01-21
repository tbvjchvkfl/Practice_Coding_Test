#include <string>
#include <vector>

std::vector<int> solution(std::string s)
{
    std::vector<int> answer;
    std::string savestr = s;
    int zero_cnt{};
    int binary_cnt{};
    while (savestr != "1")
    {
        std::string stemp;
        for (int i = 0; i < savestr.size(); i++)
        {
            if (savestr[i] == '0')
            {
                zero_cnt++;
            }
            else
            {
                stemp += savestr[i];
            }
        }

        savestr = stemp;

        int size = savestr.size();
        savestr = "";
        while (size > 0)
        {
            savestr += std::to_string(size % 2);
            size = size / 2;
        }
        binary_cnt++;
    }
    
    answer.push_back(binary_cnt);
    answer.push_back(zero_cnt);

    return answer;
}