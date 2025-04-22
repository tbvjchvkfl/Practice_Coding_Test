문제 풀이
-

>- 부분 문자열을 만들어 비교하는 방법을 사용했습니다.
>- 처음 문제를 풀 때에는 skill의 모든 부분 문자열을 만들어 skill_trees와 비교하는 방식으로 접근했으나, 계속 오답이 나왔었습니다.
>- 그래서 다른 사람들의 풀이를 보던 중 조건에 해당 사항이 없어도 성공한 것으로 처리해야한다는 것을 알게되었고, 다른 분들의 풀이를 참고하긴 했지만 문제를 풀어낼 수 있었습니다.

<pre>
  <code>

============== 최초 문제 풀이 (오답) ==============
      #include <string>
      #include <stack>
      #include <vector>
      
      int solution(std::string skill, std::vector<std::string> skill_trees) 
      {
          int answer = 0;
          std::vector<std::string> SkillTrist;
          std::vector<std::string> ConfirmedList;
          std::string ConfirmedStr;
      
          for (int i = 0; i < skill.size(); i++)
          {
              // 올바른 스킬트리를 전부 담는다.
              SkillTrist.push_back(skill.substr(0, i + 1));
          }
      
          for (auto s : skill_trees)
          {
              ConfirmedStr.clear();
              for (auto t : s)
              {
                  // 유저의 스킬트리가 skill에 있는 항목들인가 검사
                  if (skill.find(t) != std::string::npos)
                  {
                      // skill에 있는 것들만 따로 담는다.
                      ConfirmedStr += t;
                  }
              }
              ConfirmedList.push_back(ConfirmedStr);
          }
          for (auto s : ConfirmedList)
          {
              for (auto t : SkillTrist)
              {
                  if (s == t)
                  {
                      answer++;
                      break;
                  }
              }
          }
      
          return answer;
      }
  </code>
</pre>


<pre>
  <code>

============== 수정된 문제 풀이 (정답) ==============
      #include <string>
      #include <stack>
      #include <vector>
      
      int solution(std::string skill, std::vector<std::string> skill_trees) 
      {
          int answer = 0;
          std::vector<std::string> SkillTrist;
          std::string ConfirmedStr;
      
          for (auto s : skill_trees)
          {
              ConfirmedStr.clear();
              for (auto t : s)
              {
                  // 유저의 스킬트리가 skill에 있는 항목들인가 검사
                  if (skill.find(t) != std::string::npos)
                  {
                      // skill에 있는 것들만 따로 담는다.
                      ConfirmedStr += t;
                  }
              }
              if (skill.substr(0, ConfirmedStr.size()) == ConfirmedStr)
              {
                  answer++;
              }
          }
          return answer;
      }
  </code>
</pre>
