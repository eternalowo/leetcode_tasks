class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long int tmp_x = x;
        long int result = 0;
        while (tmp_x > 0) {
            result = result * 10 + (tmp_x % 10);
            tmp_x /= 10;
        }    
    if (result == x)
        return true;  
    else
        return false;
    }
};