class Solution {
public:
    bool isValid(std::string s) {

        if (s.size() % 2 == 1)
            return false;

        std::stack<char> left_brackets {};

        for (auto& elem : s) {
            if (elem == '(' || elem == '{' || elem == '[') {
                left_brackets.push(elem);
                continue;
            }
            if (!left_brackets.empty()) {
                if (left_brackets.top() == '(' && elem != ')')
                    return false;
                else if (left_brackets.top() == '{' && elem != '}')
                    return false;
                else if (left_brackets.top() == '[' && elem != ']')
                    return false;
                left_brackets.pop();
            }
            else
                return false;
        }
        if (!left_brackets.empty())
            return false;
        return true;
    }
};