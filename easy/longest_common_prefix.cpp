class Solution {

public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {

        std::string result = "";
        std::size_t ind = 0;

        while (ind < strs[0].length()) {

            char currChar = strs[0][ind];
            for (std::size_t i = 1; i < strs.size(); ++i)
                if (ind >= strs[i].length() || strs[i][ind] != currChar)
                    return result;

            result += currChar;
            ++ind;

        }
        
        return result;
    }
};