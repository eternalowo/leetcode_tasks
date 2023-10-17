class Solution {
    // https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
    // Method: Sliding Window
    // Complexity: O(m * n) n - haystack size, m - needle size
public:
    int strStr(std::string haystack, std::string needle) {
        if (haystack.size() < needle.size())
            return -1;

        for (std::size_t i = 0; i < haystack.size() - needle.size() + 1; ++i) {
            if (haystack.substr(i, needle.size()) == needle)
                return i;
        }
        return -1;
    }
};