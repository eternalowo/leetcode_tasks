class Solution {
public:
    int romanToInt(string s) {

        std::unordered_map<char, int> alphabet;

        alphabet['I'] = 1;
        alphabet['V'] = 5;
        alphabet['X'] = 10;
        alphabet['L'] = 50;
        alphabet['C'] = 100;
        alphabet['D'] = 500;
        alphabet['M'] = 1000;

        int result = 0;

        for (std::size_t i = 0; i < s.size(); ++i) {
            if (alphabet[s[i]] < alphabet[s[i + 1]])
                result -= alphabet[s[i]];
            else
                result += alphabet[s[i]];
        }

        return result;
    }
};