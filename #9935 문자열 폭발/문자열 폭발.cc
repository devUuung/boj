#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int len_a = a.size();
    int len_b = b.size();
    vector<char> stack;
    for (int i = 0; i < len_a; i++)
    {
        // 길이 체크
        if (stack.size() >= len_b - 1)
        {
            // b의 마지막문자를 넣을 예정이냐
            if (a[i] == b[len_b - 1])
            {
                // 모든 문자가 일치하는지 확인
                bool check = true;
                for (int j = 1; j < len_b; j++)
                {
                    if (stack[stack.size() - j] != b[len_b - 1 - j])
                    {
                        check = false;
                        break;
                    }
                }
                // 모든 문자가 일치한다면 pop
                if (check)
                {
                    for (int j = 1; j < len_b; j++)
                    {
                        stack.pop_back();
                    }
                }
                else
                {
                    stack.push_back(a[i]);
                }
            }
            else
            {
                stack.push_back(a[i]);
            }
        }
        else
        {
            stack.push_back(a[i]);
        }
    }
    if (stack.size() != 0)
    {
        for (int i = 0; i < stack.size(); i++)
        {
            printf("%c", stack[i]);
        }
    }
    else
    {
        printf("FRULA");
    }
    return 0;
}